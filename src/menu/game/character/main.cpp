
#include "menu/game/character/main.hpp"

#include "game/main.hpp"
#include "input/main.hpp"
#include "menu/game/main.hpp"
#include "output/age.hpp"
#include "output/name.hpp"

#include <iostream>
#include <string>

namespace topx	= sam::tacpg;
namespace cur	= topx::menu::game::character;

namespace {
	constexpr auto const MATCH = 0;
	constexpr auto const MENU = "			character			";
	constexpr auto const MENU_OPTIONS = "[A] bio		[S] actions		[Q] switch prev		[W] switch next		[D] game menu";
	//constexpr auto const MENU_OPTIONS = "[A] move		[S] attack		[Q] collect		[E] items		[W] drop		[D character menu]";
	//constexpr auto const MENU_OPTIONS = "[A] turn left		[D] turn right		[W] forward		[S] backward		[Z] character menu";
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

cur::Main::Main(topx::input::Main & inputListener,
				topx::game::Main & game)
	: inputListener(inputListener)
	, input(*this)
	, game(game) {

}

void cur::Main::open() {
	std::cout << std::endl << std::endl << MENU << std::endl;
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

#ifdef IGNORE
void cur::Main::receiveInput(std::string const & input) {
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
	}
}
#endif // IGNORE

void cur::Main::showBio(topx::character::Main & character) {
	auto const & bio = character.getBio();
	std::cout << std::endl << std::endl << BIO << std::endl
		<< "      " << NAME << output::name(bio.getName(), bio.getGender()) << std::endl
		<< "      " << AGE << output::age(bio.getAge()) << std::endl;

	displayOptions();
}

void cur::Main::showStats(topx::character::Main & character) {
	std::cout << STATS
		<< std::endl << std::endl << ">> ";

	displayOptions();
}

//*****public*****
//****************
//*****private****

void cur::Main::displayOptions() {
	std::cout << std::endl << std::endl << MENU_OPTIONS << std::endl << ">> ";
}
