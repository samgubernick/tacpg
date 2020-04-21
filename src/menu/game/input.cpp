
#include "menu/game/input.hpp"

#include <string>

namespace topx	= sam::tacpg;
namespace cur	= topx::menu::game;

cur::Game::Game(topx::input::Main & inputListener,
				topx::game::Main & game,
				cur::Main & mainMenu)
	: inputListener(inputListener)
	, state(State::none)
	, mainMenu(mainMenu)
	, game(game) {

}

cur::Game::Action cur::Game::now(std::string const & key) {
	if (key.compare("a") == MATCH) {
		return Action::turnLeft;
	}
	else if (key.compare("d") == MATCH) {
		return Action::turnRight;
	}
	else if (key.compare("w") == MATCH) {
		return Action::moveForward;
	}
	else if (key.compare("s") == MATCH) {
		return Action::moveBackward;
	}
	else if (key.compare("r") == MATCH) {
		return Action::look;
	}
	else if (key.compare("t") == MATCH) {
		return Action::use;
	}
	else if (key.compare("z") == MATCH) {
		return Action::pause;
	}
	else if (key.compare("q") == MATCH) {
		return Action::showBio;
	}
	else {
		return Action::ignore;
	}
}

void cur::Game::receiveInput(std::string const & input) {
	auto const action = this->now(input);
	switch (action) {
		case Action::turnLeft: {
			
			break;
		}
		case Action::turnRight: {
			
			break;
		}
		case Action::moveForward: {
			
			break;
		}
		case Action::moveBackward: {
			
			break;
		}
		case Action::look: {
			
			break;
		}
		case Action::use: {
			
			break;
		}
		case Action::showBio: {
			
			break;
		}
		case Action::showStats: {
			
			break;
		}
		case Action::pause: {
			
			break;
		}
		default: {
			break;
		}
	}
}
