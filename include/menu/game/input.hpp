
#ifndef SAM_TACPG_MENU_GAME_INPUT_HPP_INCLUDED
#define SAM_TACPG_MENU_GAME_INPUT_HPP_INCLUDED

#include "menu/game/action.hpp"
#include "input/i_listener.hpp"

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
				class Main;
				class Input : public input::IListener {
				public:
					Input(input::Main & inputListener,
						  game::Main & game,
						  Main & mainMenu);

					Action now(std::string const & key);
					void receiveInput(std::string const & input);
				private:
					input::Main & inputListener;
					Main & mainMenu;
					game::Main & game;
				};
			}
		}
	}
}
#endif // INCLUDE_GUARD
