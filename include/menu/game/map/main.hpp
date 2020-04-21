
#ifndef SAM_TACPG_MENU_GAME_MAP_MAIN_HPP_INCLUDED
#define SAM_TACPG_MENU_GAME_MAP_MAIN_HPP_INCLUDED

#include "menu/game/map/action.hpp"
#include "menu/game/map/input.hpp"

#include <string>

namespace sam {
	namespace tacpg {
		namespace game {
			class Main;
		}
		namespace input {
			class Main;
		}
		namespace menu {
			namespace game {
				namespace map {
					class Main {
					public:
						Main(input::Main & inputListener,
							 tacpg::game::Main & game);


						Input & getInputListener();
						void invalidInput();

						void goToGameMenu();
						void open();
						void openCharacter();
						void openMap();
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
