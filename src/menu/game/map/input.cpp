
#include "menu/game/map/input.hpp"

#include "map/size.hpp"
#include "menu/game/map/main.hpp"
#include "utility/letter.hpp"
#include "utility/text.hpp"
#include "utility/values.hpp"

#include <string>

namespace topx	= sam::tacpg;
namespace cur	= topx::menu::game::map;

cur::Input::Input(topx::menu::game::map::Main & menu)
	: menu(menu)
	, displayKeyBack("Q")
	, displayKeyShow("S")
	, displayKeyWhat("E")
	, keyBack("q")
	, keyWhat("e")
	, keyShow("s") {

}

std::string const & cur::Input::getDisplayKeyBack() const {
	return displayKeyBack;
}

std::string const & cur::Input::getDisplayKeyShow() const {
	return displayKeyShow;
}

std::string const & cur::Input::getDisplayKeyWhat() const {
	return displayKeyWhat;
}

std::string const & cur::Input::getKeyBack() const {
	return keyBack;
}

std::string const & cur::Input::getKeyShow() const {
	return keyShow;
}

std::string const & cur::Input::getKeyWhat() const {
	return keyWhat;
}

void cur::Input::receiveInput(std::string const & input) {
	auto const action = getAction(input);
	switch (action) {
		case Action::gameMenu: {
			menu.goToGameMenu();
			break;
		}
		case Action::show: {
			menu.showMap();
			break;
		}
		case Action::what: {
			receiveWhat(input);
			break;
		}
		default: {
			menu.invalidInput();
			break;
		}
	}
}

//*****public*****
//****************
//*****private****

cur::Action cur::Input::getAction(std::string const & key) const {
	if (key.compare(keyBack) == utility::values::MATCH) {
		return Action::gameMenu;
	}

	if (key.compare(keyShow) == utility::values::MATCH) {
		return Action::show;
	}

	if (key.size() > 2) {
		auto begin = std::begin(key);
		if (key.substr(std::distance(begin, begin), 1)
			.compare(keyWhat) == utility::values::MATCH) {

			return Action::what;
		}
	}

	return Action::ignore;
}

void cur::Input::receiveWhat(std::string const & input) {
	auto cell = tacpg::map::Size();

	auto finishedColumn		= false;
	auto row				= size_t{ 0 };
	auto begin				= std::begin(input);
	auto currentCharacter	= std::next(begin);
	auto lastCharacter		= std::end(input);

	while (currentCharacter < lastCharacter) {
		auto character = input.substr(
			std::distance(begin, currentCharacter), 1);

		if (utility::text::isNumber(character)) {
			if (!finishedColumn) {
				cell.width *= 10;
				cell.width += static_cast<size_t>(std::stoi(character));
			}
		}
		else if (utility::text::isLetter(character)) {
			if (cell.height == 0) {
				if (row > 0) {
					finishedColumn = true;
				}

				cell.height = static_cast<size_t>(utility::letter::getLetter((character)));
			}
		}

		currentCharacter = std::next(currentCharacter);
	}

	menu.whatIs(cell);
}