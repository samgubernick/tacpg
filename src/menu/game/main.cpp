
#include "menu/game/main.hpp"

#include "game/main.hpp"
#include "input/main.hpp"
#include "menu/top/main.hpp"
#include "output/age.hpp"
#include "output/name.hpp"

#include <iostream>
#include <string>

namespace topx	= sam::tacpg;
namespace cur	= topx::menu::game;

namespace {
	constexpr auto const MATCH = 0;
	constexpr auto const MENU = "			game			";
	constexpr auto const MENU_OPTIONS = "[A] map		[S] character		[D] main menu";
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

void cur::Main::open() {
	std::cout << std::endl << std::endl << MENU << std::endl;
	displayOptions();
}

cur::Input & cur::Main::getInputListener() {
	return input;
}

void cur::Main::goToTopMenu() {
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
	std::cout << std::endl << std::endl << MENU_OPTIONS << std::endl << ">> ";
}
