
#include "menu/game/map/main.hpp"

#include "game/main.hpp"
#include "input/main.hpp"
#include "menu/borders.hpp"
#include "menu/game/main.hpp"
#include "output/age.hpp"
#include "output/name.hpp"
#include "utility/letter.hpp"

#include <iostream>
#include <string>

namespace topx	= sam::tacpg;
namespace cur	= topx::menu::game::map;

namespace {
	constexpr auto const NAME			= "map";
	constexpr auto const ITEM_BACK		= "go back";
	constexpr auto const ITEM_SHOW		= "show";
	constexpr auto const ITEM_WHAT		= "enumerate <row, column>";
	constexpr auto const ITEM_SPACER	= "		";
	//constexpr auto const S = "";
}

cur::Main::Main(topx::input::Main & inputListener,
				topx::game::Main & game)
	: inputListener(inputListener)
	, input(*this)
	, game(game)
	{

}

void cur::Main::close() {
	borders::showBottom();
}

void cur::Main::open() {
	borders::showTop(NAME);
	displayOptions();
}

void cur::Main::showMap() {
	std::cout << "Status:" << std::endl << "-------------------------------------" << std::endl << "    ";

	auto const & map = game.getMap();

	for (auto i = size_t{ 0 }; i < map.getSize().width; ++i) {
		std::cout << "   " << (i  + 1) << "   "; //" | 1 | "
	}

	for (auto i = size_t{ 0 }; i < game.getMap().getCellCount(); ++i) {
		if (i % map.getSize().width == 0) {
			if (i > 0) {
				std::cout << "|";
			}
			std::cout << std::endl << std::endl << std::endl
				<< utility::letter::getCharUpper(static_cast<data::Letter>(i / map.getSize().width)) << "   ";
		}

		auto & cellItems = map.getCell(i).getItems();
		if (!cellItems.empty()) {
			auto neutralItem = true;
			auto item = std::begin(cellItems);
			auto end = std::end(cellItems);
			while (item < end) {
				switch ((*item)->getAllegiance()) {
					case tacpg::map::IMapItem::Allegiance::enemy: {
						std::cout << " | G   ";
						item = end;
						neutralItem = false;
						break;
					}
					case tacpg::map::IMapItem::Allegiance::friendly: {
						std::cout << " | E   ";
						item = end;
						neutralItem = false;
						break;
					}
					default: {
						item = std::next(item);
						break;
					}
				}
			}

			if (neutralItem) {
				std::cout << " | c   ";
			}
		}
		else {
			std::cout << " |     ";
		}
	}
	
	std::cout << "|" << std::endl << "-------------------------------------";

	std::cout << std::endl << std::endl << ">> ";
}

cur::Input & cur::Main::getInputListener() {
	return input;
}

void cur::Main::goToGameMenu() {
	close();
	game.getMenu().open();
	inputListener.setListener(game.getMenu().getInputListener());
}

void cur::Main::whatIs(topx::map::Size const & cell) {
	auto cellIndex = cell.width * cell.height;
	if (cellIndex <= game.getMap().getCellCount()) {

		std::cout << std::endl
			<< "Contents of cell (" << utility::letter::getCharUpper(static_cast<data::Letter>(cell.height)) << cell.width << "): ";

		auto items = game.getMap().getCell(cellIndex).getItems();
		
		if (!items.empty()) {
			auto item = std::begin(items);
			auto lastItem = std::prev(std::end(items));
			while (item < lastItem) {
				std::cout << (*item)->getCellDisplayName() << "item" << ", ";
				
			}
			std::cout << "item" << std::endl;
		}
		else {
			std::cout << "None" << std::endl;
		}
	}
	else {
		std::cout << std::endl
			<< "Cell (" << utility::letter::getCharUpper(static_cast<data::Letter>(cell.height)) << cell.width
			<< ") doesn't exist on map" << std::endl << std::endl;
	}

	displayOptions();
}

void cur::Main::invalidInput() {
	displayOptions();
}

//*****public*****
//****************
//*****private****

void cur::Main::displayOptions() {
	std::cout
		<< "[" << input.getDisplayKeyShow() << "] " << ITEM_SHOW << ITEM_SPACER
		<< "[" << input.getDisplayKeyWhat() << "] " << ITEM_WHAT << ITEM_SPACER
		<< "[" << input.getDisplayKeyBack() << "] " << ITEM_BACK << ITEM_SPACER
		<< std::endl << ">> ";
}
