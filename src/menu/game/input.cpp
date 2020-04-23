
#include "menu/game/input.hpp"

#include "menu/game/main.hpp"
#include "utility/values.hpp"

#include <string>

namespace topx	= sam::tacpg;
namespace cur	= topx::menu::game;

cur::Input::Input(topx::menu::game::Main & menu)
	: menu(menu)
	, keyCharacter("c")
	, keyMap("m")
	, keyBack("q")
	, displayKeyCharacter("C")
	, displayKeyMap("M")
	, displayKeyBack("Q") {

}

std::string const & cur::Input::getDisplayKeyCharacter() const {
	return displayKeyCharacter;
}

std::string const & cur::Input::getDisplayKeyMap() const {
	return displayKeyMap;
}

std::string const & cur::Input::getDisplayKeyBack() const {
	return displayKeyBack;
}

std::string const & cur::Input::getKeyCharacter() const {
	return keyCharacter;
}

std::string const & cur::Input::getKeyMap() const {
	return keyMap;
}

std::string const & cur::Input::getKeyBack() const {
	return keyBack;
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
		case Action::back: {
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
	if (key.compare(keyMap) == utility::values::MATCH) {
		return Action::openMap;
	}

	if (key.compare(keyCharacter) == utility::values::MATCH) {
		return Action::openCharacter;
	}

	if (key.compare(keyBack) == utility::values::MATCH) {
		return Action::back;
	}
	
	return Action::ignore;
}
