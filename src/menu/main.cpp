
#include "menu/main.hpp"

#include "input/main.hpp"

#include <iostream>
#include <string>

namespace topx	= sam::tacpg;
namespace cur	= topx::menu;

namespace {
	constexpr auto const MATCH = 0;
	constexpr auto const MENU_OPTIONS = "E exit || Z play || X load || C save";
	constexpr auto const START_GAME = "___---Starting new game---___";
	constexpr auto const RESUME_GAME = "___---Resuming game---___";
	constexpr auto const LOAD = "___---Loading---___";
	constexpr auto const SAVE = "___---Saving---___";
}

cur::Main::Main(topx::input::Main & inputListener)
	: inputListener(inputListener)
	, game(inputListener, *this) {

}

void cur::Main::display() {
	std::cout << std::endl << std::endl << MENU_OPTIONS << std::endl << ">> ";
}

cur::Main::Action cur::Main::now(std::string const & key) {
	if (key.compare("e") == MATCH) {
		return Action::exit;
	}
	else if (key.compare("z") == MATCH) {
		return Action::play;
	}
	else if (key.compare("x") == MATCH) {
		return Action::load;
	}
	else if (key.compare("c") == MATCH) {
		return Action::save;
	}
	else {
		return Action::ignore;
	}
}

void cur::Main::receiveInput(std::string const & input) {
	auto const action = now(input);
	switch (action) {
		case Action::exit: {
			inputListener.stopListening();
			return;
		}
		case Action::play: {
			switch (game.getMenu().getState()) {
				case Game::State::none: {
					std::cout << std::endl << std::endl << START_GAME << std::endl << std::endl;
					game.getMenu().newGame();
					game.getMenu().display();
					inputListener.setListener(game.getMenu());
					break;
				}
				case Game::State::paused: {
					std::cout << std::endl << std::endl << RESUME_GAME << std::endl << std::endl;
					game.getMenu().display();
					inputListener.setListener(game.getMenu());
					break;
				}
				default: {
					break;
				}
			}
			break;
		}
		case Action::load: {
			std::cout << std::endl << std::endl << LOAD << std::endl << std::endl;
			break;
		}
		case Action::save: {
			std::cout << std::endl << std::endl << SAVE << std::endl << std::endl;
			break;
		}
		default: {
			std::cout << "Unknown" << std::endl;
			break;
		}
	}

}
