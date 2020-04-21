
#ifndef SAM_TACPG_MENU_GAME_INPUT_HPP_INCLUDED
#define SAM_TACPG_MENU_GAME_INPUT_HPP_INCLUDED

#include "menu/game/action.hpp"
#include "input/i_listener.hpp"

#include <string>

namespace sam {
	namespace tacpg {
		namespace menu {
			namespace game {
				class Main;
				class Input : public input::IListener {
				public:
					Input(game::Main & menu);

					void receiveInput(std::string const & input);
				private:
					game::Main & menu;

					Action getAction(std::string const & key) const;
				};
			}
		}
	}
}
#endif // INCLUDE_GUARD
