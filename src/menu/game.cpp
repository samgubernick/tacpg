
#include "menu/game.hpp"

#include "game/main.hpp"
#include "input/main.hpp"
#include "menu/main.hpp"
#include "output/age.hpp"
#include "output/name.hpp"

#include <iostream>
#include <string>

namespace topx	= sam::tacpg;
namespace cur	= topx::menu;

namespace {
	constexpr auto const MATCH = 0;
	constexpr auto const MENU_OPTIONS = "A turn left || D turn right || W forward || S backward || Z menu";
	constexpr auto const TURN_LEFT = "Turning left";
	constexpr auto const TURN_RIGHT = "Turning right";
	constexpr auto const MOVE_FORWARD = "Moving forward";
	constexpr auto const MOVE_BACKWARD = "Moving backward";
	constexpr auto const LOOK = "Looking";
	constexpr auto const USE = "Using";
	constexpr auto const BIO = "***                Bio                 ***";
	constexpr auto const STATS = "___Stats___";
	constexpr auto const NAME = "Name: ";
	constexpr auto const AGE = "Age: ";
	//constexpr auto const S = "";
	//constexpr auto const S = "";
}

cur::Game::Game(topx::input::Main & inputListener,
				topx::game::Main & game,
				cur::Main & mainMenu)
	: inputListener(inputListener)
	, state(State::none)
	, mainMenu(mainMenu)
	, game(game) {

}

void cur::Game::display() {
	std::cout << std::endl << std::endl << MENU_OPTIONS << std::endl << ">> ";
}

cur::Game::State cur::Game::getState() {
	return state;
}

void cur::Game::newGame() {
	game.resetGame();
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
			std::cout << TURN_LEFT << std::endl << std::endl << ">> ";
			break;
		}
		case Action::turnRight: {
			std::cout << TURN_RIGHT << std::endl << std::endl << ">> ";
			break;
		}
		case Action::moveForward: {
			std::cout << MOVE_FORWARD << std::endl << std::endl << ">> ";
			break;
		}
		case Action::moveBackward: {
			std::cout << MOVE_BACKWARD << std::endl << std::endl << ">> ";
			break;
		}
		case Action::look: {
			std::cout << LOOK << std::endl << std::endl << ">> ";
			break;
		}
		case Action::use: {
			std::cout << USE << std::endl << std::endl << ">> ";
			break;
		}
		case Action::showBio: {
			showBio(game.getCurrentCharacter());
			break;
		}
		case Action::showStats: {
			showStats(game.getCurrentCharacter());
			break;
		}
		case Action::pause: {
			state = State::paused;
			mainMenu.display();
			inputListener.setListener(mainMenu);
			return;
		}
		default: {
			display();
			break;
		}
	}
}

//*****public*****
//****************
//*****private****

void cur::Game::showBio(topx::character::Main & character) {
	auto const & bio = character.getBio();
	std::cout << std::endl << std::endl << BIO << std::endl
		<< "      " << NAME << output::name(bio.getName(), bio.getGender()) << std::endl
		<< "      " << AGE << output::age(bio.getAge()) << std::endl;

	display();
}

void cur::Game::showStats(topx::character::Main & character) {
	std::cout << STATS
		<< std::endl << std::endl << ">> ";

	display();
}
