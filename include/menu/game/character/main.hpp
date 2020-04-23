
#ifndef SAM_TACPG_MENU_GAME_CHARACTER_MAIN_HPP_INCLUDED
#define SAM_TACPG_MENU_GAME_CHARACTER_MAIN_HPP_INCLUDED

#include "menu/game/character/action.hpp"
#include "menu/game/character/input.hpp"

#include <string>

namespace sam {
	namespace tacpg {
		namespace character {
			class Main;
		}
		namespace game {
			class Main;
		}
		namespace input {
			class Main;
		}
		namespace menu {
			namespace game {
				namespace character {
					class Main {
					public:
						Main(input::Main & inputListener,
							 tacpg::game::Main & game);

						void close();
						Input & getInputListener();
						void invalidInput();
						void open();
						void goToGameMenu();
						void showBio(tacpg::character::Main & character);
						void showStats(tacpg::character::Main & character);
					private:
						input::Main & inputListener;
						tacpg::game::Main & game;
						Input input;

						void displayOptions();
					};
				}
			}
		}
	}
}
#endif // INCLUDE_GUARD
