
#include "menu/game/input.hpp"

#include "menu/game/main.hpp"
#include "menu/values.hpp"

#include <string>

namespace topx	= sam::tacpg;
namespace cur	= topx::menu::game;

cur::Input::Input(topx::menu::game::Main & menu)
	: menu(menu) {

}

void cur::Input::receiveInput(std::string const & input) {
	auto const action = getAction(input);
	switch (action) {
		case Action::openCharacter: {
			menu.openCharacter();
			break;
		}
		case Action::openMap: {
			menu.openMap();
			break;
		}
		case Action::pause: {
			menu.goToTopMenu();
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
		return Action::openMap;
	}
	else if (key.compare("s") == values::MATCH) {
		return Action::openCharacter;
	}
	if (key.compare("d") == values::MATCH) {
		return Action::pause;
	}
	else {
		return Action::ignore;
	}
}
