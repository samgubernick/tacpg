
#ifndef SAM_TACPG_GAME_MAIN_HPP_INCLUDED
#define SAM_TACPG_GAME_MAIN_HPP_INCLUDED

#include "character/main.hpp"
#include "map/main.hpp"
#include "menu/game/main.hpp"

#include <vector>

namespace sam {
	namespace tacpg {
		namespace game {
			class Main {
			public:
				enum class State {
					none,
					paused,
					running,
				};

				Main(input::Main & inputListener, menu::top::Main & mainMenu);

				character::Main & getCurrentCharacter();
				menu::game::Main & getMenu();
				State getState() const;
				void pause();
				void resetGame();
			private:
				map::Main map;
				menu::game::Main menu;
				std::vector<character::Main> characters;
				State state;

				character::Main * currentCharacter;
			};
		}
	}
}
#endif // INCLUDE_GUARD
