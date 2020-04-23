
#include "menu/game/character/input.hpp"

#include "menu/game/character/main.hpp"
#include "utility/values.hpp"

#include <string>

namespace topx	= sam::tacpg;
namespace cur	= topx::menu::game::character;

cur::Input::Input(topx::menu::game::character::Main & menu)
	: menu(menu) {

}

std::string const & cur::Input::getDisplayKeyBack() const {
	return displayKeyBack;
}

std::string const & cur::Input::getKeyBack() const {
	return keyBack;
}

void cur::Input::receiveInput(std::string const & input) {
	auto const action = getAction(input);
	switch (action) {
		case Action::turnLeft: {
			menu;
			break;
		}
		case Action::turnRight: {
			menu;
			break;
		}
		case Action::moveForward: {
			menu;
			break;
		}
		case Action::moveBackward: {
			menu;
			break;
		}
		case Action::look: {
			menu;
			break;
		}
		case Action::use: {
			menu;
			break;
		}
		case Action::showBio: {
			menu;
			break;
		}
		case Action::showStats: {
			menu;
			break;
		}
		case Action::gameMenu: {
			menu.goToGameMenu();
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
	if (key.compare("a") == utility::values::MATCH) {
		return Action::turnLeft;
	}

	if (key.compare("d") == utility::values::MATCH) {
		return Action::turnRight;
	}

	if (key.compare("w") == utility::values::MATCH) {
		return Action::moveForward;
	}

	if (key.compare("s") == utility::values::MATCH) {
		return Action::moveBackward;
	}

	if (key.compare("r") == utility::values::MATCH) {
		return Action::look;
	}

	if (key.compare("t") == utility::values::MATCH) {
		return Action::use;
	}

	if (key.compare("z") == utility::values::MATCH) {
		return Action::gameMenu;
	}

	if (key.compare("q") == utility::values::MATCH) {
		return Action::showBio;
	}

	return Action::ignore;
}
