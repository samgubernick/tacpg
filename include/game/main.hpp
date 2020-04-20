
#ifndef SAM_TACPG_GAME_MAIN_HPP_INCLUDED
#define SAM_TACPG_GAME_MAIN_HPP_INCLUDED

#include "character/main.hpp"
#include "map/main.hpp"
#include "menu/game.hpp"

#include <vector>

namespace sam {
	namespace tacpg {
		namespace game {
			class Main {
			public:
				Main(input::Main & inputListener, menu::Main & mainMenu);

				character::Main & getCurrentCharacter();
				menu::Game & getMenu();
				void resetGame();
			private:
				map::Main map;
				menu::Game menu;
				std::vector<character::Main> characters;

				character::Main * currentCharacter;
			};
		}
	}
}
#endif // INCLUDE_GUARD
