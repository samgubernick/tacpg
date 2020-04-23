
#ifndef SAM_TACPG_MENU_GAME_MAIN_HPP_INCLUDED
#define SAM_TACPG_MENU_GAME_MAIN_HPP_INCLUDED

#include "menu/game/action.hpp"
#include "menu/game/input.hpp"
#include "menu/game/character/main.hpp"
#include "menu/game/map/main.hpp"

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
			namespace top {
				class Main;
			}
			namespace game {
				class Main {
				public:
					Main(input::Main & inputListener,
						 tacpg::game::Main & game,
						 menu::top::Main & topMenu);

					void close();
					Input & getInputListener();
					void invalidInput();
					void newGame();
					void open();
					void openMap();
					void openCharacter();
					void goToTopMenu();
				private:
					input::Main & inputListener;
					menu::top::Main & mainMenu;
					tacpg::game::Main & game;
					Input input;

					character::Main character;
					map::Main map;

					void displayOptions();
				};
			}
		}
	}
}
#endif // INCLUDE_GUARD
