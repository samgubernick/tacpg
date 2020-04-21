
#include "menu/game/character/input.hpp"

#include "menu/game/character/main.hpp"
#include "menu/values.hpp"

#include <string>

namespace topx	= sam::tacpg;
namespace cur	= topx::menu::game::character;

cur::Input::Input(topx::menu::game::character::Main & menu)
	: menu(menu) {

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
	if (key.compare("a") == values::MATCH) {
		return Action::turnLeft;
	}
	else if (key.compare("d") == values::MATCH) {
		return Action::turnRight;
	}
	else if (key.compare("w") == values::MATCH) {
		return Action::moveForward;
	}
	else if (key.compare("s") == values::MATCH) {
		return Action::moveBackward;
	}
	else if (key.compare("r") == values::MATCH) {
		return Action::look;
	}
	else if (key.compare("t") == values::MATCH) {
		return Action::use;
	}
	else if (key.compare("z") == values::MATCH) {
		return Action::gameMenu;
	}
	else if (key.compare("q") == values::MATCH) {
		return Action::showBio;
	}
	else {
		return Action::ignore;
	}
}
