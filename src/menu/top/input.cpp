
#include "menu/top/input.hpp"

#include "menu/top/main.hpp"
#include "menu/values.hpp"

#include <string>

namespace topx	= sam::tacpg;
namespace cur	= topx::menu::top;

cur::Input::Input(topx::menu::top::Main & menu)
	: menu(menu) {

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
	if (key.compare("e") == values::MATCH) {
		return Action::exit;
	}
	else if (key.compare("a") == values::MATCH) {
		return Action::play;
	}
	else if (key.compare("s") == values::MATCH) {
		return Action::save;
	}
	else if (key.compare("d") == values::MATCH) {
		return Action::load;
	}
	else {
		return Action::ignore;
	}
}
