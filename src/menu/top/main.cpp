
#include "menu/top/main.hpp"

#include "input/main.hpp"

#include <iostream>
#include <string>

namespace topx	= sam::tacpg;
namespace cur	= topx::menu::top;

namespace {
	constexpr auto const MATCH = 0;
	constexpr auto const MENU = "			main menu			";
	constexpr auto const MENU_OPTIONS = "[A] play		[S] save		[D] load		[E] exit";
	constexpr auto const START_GAME = "___---Starting new game---___";
	constexpr auto const RESUME_GAME = "___---Resuming game---___";
	constexpr auto const LOAD = "___---Loading---___";
	constexpr auto const SAVE = "___---Saving---___";
}

cur::Main::Main(topx::input::Main & inputListener)
	: inputListener(inputListener)
	, input(*this)
	, game(inputListener, *this) {

}

void cur::Main::open() {
	std::cout << std::endl << std::endl << MENU << std::endl;
	displayOptions();
}

void cur::Main::exit() {
	inputListener.stopListening();
}

cur::Input & cur::Main::getInputListener() {
	return input;
}

void cur::Main::invalidInput() {
	std::cout << "Unknown" << std::endl;
}

void cur::Main::load() {
	std::cout << std::endl << std::endl << LOAD << std::endl << std::endl;

}

void cur::Main::play() {
	switch (game.getState()) {
		case tacpg::game::Main::State::none: {
			std::cout << std::endl << std::endl << START_GAME << std::endl << std::endl;
			game.getMenu().newGame();
			game.getMenu().open();
			inputListener.setListener(game.getMenu().getInputListener());
			break;
		}
		case tacpg::game::Main::State::paused: {
			std::cout << std::endl << std::endl << RESUME_GAME << std::endl << std::endl;
			game.getMenu().open();
			inputListener.setListener(game.getMenu().getInputListener());
			break;
		}
		default: {
			break;
		}
	}
}

void cur::Main::save() {
	std::cout << std::endl << std::endl << SAVE << std::endl << std::endl;

}

//*****public*****
//****************
//*****private****

void cur::Main::displayOptions() {
	std::cout << std::endl << std::endl << MENU_OPTIONS << std::endl << ">> ";
}
