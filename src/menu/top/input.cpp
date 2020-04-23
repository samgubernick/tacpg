
#include "menu/top/input.hpp"

#include "menu/top/main.hpp"
#include "utility/text.hpp"
#include "utility/values.hpp"

#include <string>

namespace topx	= sam::tacpg;
namespace cur	= topx::menu::top;

cur::Input::Input(topx::menu::top::Main & menu)
	: menu(menu)
	, keyExit("q")
	, keyLoad("l")
	, keyPlay("p")
	, keySave("s")
	, displayKeyExit("Q")
	, displayKeyLoad("L")
	, displayKeyPlay("P")
	, displayKeySave("S") {
}

std::string const & cur::Input::getDisplayKeyExit() const {
	return displayKeyExit;
}

std::string const & cur::Input::getDisplayKeyLoad() const {
	return displayKeyLoad;
}

std::string const & cur::Input::getDisplayKeyPlay() const {
	return displayKeyPlay;
}

std::string const & cur::Input::getDisplayKeySave() const {
	return displayKeySave;
}

std::string const & cur::Input::getKeyExit() const {
	return keyExit;
}

std::string const & cur::Input::getKeyLoad() const {
	return keyLoad;
}

std::string const & cur::Input::getKeyPlay() const {
	return keyPlay;
}

std::string const & cur::Input::getKeySave() const {
	return keySave;
}

void cur::Input::receiveInput(std::string const & input) {
	auto const action = getAction(input);
	switch (action) {
		case Action::exit: {
			menu.exit();
			break;
		}
		case Action::play: {
			menu.play();
			break;
		}
		case Action::load: {
			menu.load();
			break;
		}
		case Action::save: {
			menu.save();
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
	if (key.compare(keyExit) == utility::values::MATCH) {
		return Action::exit;
	}
	else if (key.compare(keyPlay) == utility::values::MATCH) {
		return Action::play;
	}
	else if (key.compare(keySave) == utility::values::MATCH) {
		return Action::save;
	}
	else if (key.compare(keyLoad) == utility::values::MATCH) {
		return Action::load;
	}
	else {
		return Action::ignore;
	}
}
