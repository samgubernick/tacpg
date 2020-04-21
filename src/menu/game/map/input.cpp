
#include "menu/game/map/input.hpp"

#include "menu/game/map/main.hpp"
#include "menu/values.hpp"

#include <string>

namespace topx	= sam::tacpg;
namespace cur	= topx::menu::game::map;

cur::Input::Input(topx::menu::game::map::Main & menu)
	: menu(menu) {

}

void cur::Input::receiveInput(std::string const & input) {
	auto const action = getAction(input);
	switch (action) {
		case Action::character: {
			menu.openCharacter();
			break;
		}
		case Action::gameMenu: {
			menu.goToGameMenu();
			break;
		}
		case Action::map: {
			menu.openMap();
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
		return Action::map;
	}
	if (key.compare("s") == values::MATCH) {
		return Action::character;
	}
	if (key.compare("d") == values::MATCH) {
		return Action::gameMenu;
	}
	else {
		return Action::ignore;
	}
}
