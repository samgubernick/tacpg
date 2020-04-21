
#include "menu/game/map/main.hpp"

#include "game/main.hpp"
#include "input/main.hpp"
#include "menu/game/main.hpp"
#include "output/age.hpp"
#include "output/name.hpp"

#include <iostream>
#include <string>

namespace topx	= sam::tacpg;
namespace cur	= topx::menu::game::map;

namespace {
	constexpr auto const MATCH = 0;
	constexpr auto const MENU = "			MAP			";
	constexpr auto const MENU_OPTIONS = "[A] map		[S] character		[D] main menu";
	//constexpr auto const S = "";
	//constexpr auto const S = "";
}

cur::Main::Main(topx::input::Main & inputListener,
				topx::game::Main & game)
	: inputListener(inputListener)
	, input(*this)
	, game(game) {

}

void cur::Main::open() {
	std::cout << std::endl << std::endl << MENU << std::endl;
	displayOptions();
}

cur::Input & cur::Main::getInputListener() {
	return input;
}

void cur::Main::goToGameMenu() {
	game.getMenu().open();
	inputListener.setListener(game.getMenu().getInputListener());
}

void cur::Main::invalidInput() {
	displayOptions();
}

void cur::Main::openCharacter() {
	game.getMenu().openCharacter();
}

void cur::Main::openMap() {
	game.getMenu().openMap();
}

//*****public*****
//****************
//*****private****

void cur::Main::displayOptions() {
	std::cout << std::endl << std::endl << MENU_OPTIONS << std::endl << ">> ";
}
