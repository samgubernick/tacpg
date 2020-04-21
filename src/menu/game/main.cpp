
#include "menu/game/main.hpp"

#include "game/main.hpp"
#include "input/main.hpp"
#include "menu/borders.hpp"
#include "menu/top/main.hpp"
#include "menu/values.hpp"
#include "output/age.hpp"
#include "output/name.hpp"

#include <iostream>
#include <string>

namespace topx	= sam::tacpg;
namespace cur	= topx::menu::game;

namespace {
	constexpr auto const MENU			= "game";
	constexpr auto const ITEM_CHARACTER	= "character";
	constexpr auto const ITEM_MAP		= "map";
	constexpr auto const ITEM_TOP_MENU	= "main menu";
	constexpr auto const ITEM_SPACER	= "		";
	//constexpr auto const S = "";
	//constexpr auto const S = "";
}

cur::Main::Main(topx::input::Main & inputListener,
				topx::game::Main & game,
				menu::top::Main & mainMenu)
	: inputListener(inputListener)
	, input(*this)
	, mainMenu(mainMenu)
	, game(game) {

}

void cur::Main::close() {
	borders::showBottom();
}

void cur::Main::open() {
	borders::showTop(MENU);
	displayOptions();
}

cur::Input & cur::Main::getInputListener() {
	return input;
}

void cur::Main::goToTopMenu() {
	close();
		
	game.pause();
	mainMenu.open();
	inputListener.setListener(mainMenu.getInputListener());
}

void cur::Main::invalidInput() {
	displayOptions();
}

void cur::Main::newGame() {
	game.resetGame();
}

void cur::Main::openCharacter() {

}

void cur::Main::openMap() {

}

//*****public*****
//****************
//*****private****

void cur::Main::displayOptions() {
	std::cout
		<< "[" << input.getKeyMap() << "] " << ITEM_MAP << ITEM_SPACER
		<< "[" << input.getKeyCharacter() << "] " << ITEM_CHARACTER << ITEM_SPACER
		<< "[" << input.getKeyTopMenu() << "] " << ITEM_TOP_MENU << ITEM_SPACER
		<< std::endl << ">> ";
}
