
#include "menu/top/main.hpp"

#include "input/main.hpp"
#include "menu/borders.hpp"
#include "utility/values.hpp"

#include <iostream>
#include <string>

namespace topx	= sam::tacpg;
namespace cur	= topx::menu::top;

namespace {
	constexpr auto const MENU			= "main menu";
	constexpr auto const ITEM_EXIT		= "quit";
	constexpr auto const ITEM_LOAD		= "load";
	constexpr auto const ITEM_PLAY		= "play";
	constexpr auto const ITEM_SAVE		= "save";
	constexpr auto const ITEM_SPACER	= "		";
	constexpr auto const START_GAME		= "Starting new game";
	constexpr auto const RESUME_GAME	= "Resuming game";
	constexpr auto const LOAD			= "Loading";
	constexpr auto const SAVE			= "Saving";
	//constexpr auto const S = "";
	//constexpr auto const S = "";
}

cur::Main::Main(topx::input::Main & inputListener)
	: inputListener(inputListener)
	, input(*this)
	, game(inputListener, *this) {

}

void cur::Main::close() {
	borders::showBottom();
}

void cur::Main::open() {
	borders::showTop(MENU);
	displayOptions();
}

void cur::Main::exit() {
	inputListener.stopListening();
}

cur::Input & cur::Main::getInputListener() {
	return input;
}

void cur::Main::invalidInput() {
	std::cout << "Unknown" << std::endl;
}

void cur::Main::load() {
	std::cout << LOAD << std::endl << std::endl;

}

void cur::Main::play() {
	switch (game.getState()) {
		case tacpg::game::Main::State::none: {
			std::cout << START_GAME << std::endl;
			close();
			game.getMenu().newGame();
			game.getMenu().open();
			inputListener.setListener(game.getMenu().getInputListener());
			break;
		}
		case tacpg::game::Main::State::paused: {
			std::cout << RESUME_GAME << std::endl;
			close();
			game.getMenu().open();
			inputListener.setListener(game.getMenu().getInputListener());
			break;
		}
		default: {
			break;
		}
	}
}

void cur::Main::save() {
	std::cout << SAVE << std::endl << std::endl;

}

//*****public*****
//****************
//*****private****

void cur::Main::displayOptions() {
	std::cout
		<< "[" << input.getDisplayKeyPlay() << "] " << ITEM_PLAY << ITEM_SPACER
		<< "[" << input.getDisplayKeyLoad() << "] " << ITEM_LOAD << ITEM_SPACER
		<< "[" << input.getDisplayKeySave() << "] " << ITEM_SAVE << ITEM_SPACER
		<< "[" << input.getDisplayKeyExit() << "] " << ITEM_EXIT << ITEM_SPACER
		<< std::endl << ">> ";
}
