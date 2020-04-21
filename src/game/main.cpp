
#include "game/main.hpp"

namespace topx	= sam::tacpg;
namespace cur	= topx::game;

cur::Main::Main(topx::input::Main & inputListener, topx::menu::top::Main & mainMenu)
	: menu(inputListener, *this, mainMenu)
	, state(State::none) {

}

topx::character::Main & cur::Main::getCurrentCharacter() {
	if (currentCharacter != nullptr) {
		return *currentCharacter;
	}
	else {
		if (!characters.empty()) {
			currentCharacter = &characters.front();
		}
		else {
			return characters.emplace_back();
		}
	}

	return *currentCharacter;
}

topx::menu::game::Main & cur::Main::getMenu() {
	return menu;
}

cur::Main::State cur::Main::getState() const {
	return state;
}

void cur::Main::pause() {
	state = State::paused;
}

void cur::Main::resetGame() {
	map.clear();

	map.setSize(map::Main::Size::small);
	currentCharacter = &characters.emplace_back();
	auto & character = *currentCharacter;
	auto & bio = character.getBio();
	bio.setName("Tim", "Roberts");
	bio.setGender(biography::Gender::male);
	bio.setAge(biography::Age(1960, data::Month::aug, 20));
}