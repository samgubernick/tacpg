
#ifndef SAM_TACPG_MENU_GAME_MAP_INPUT_HPP_INCLUDED
#define SAM_TACPG_MENU_GAME_MAP_INPUT_HPP_INCLUDED

#include "menu/game/map/action.hpp"
#include "input/i_listener.hpp"

#include <string>

namespace sam {
	namespace tacpg {
		namespace menu {
			namespace game {
				namespace map {
					class Main;
					class Input : public input::IListener {
					public:
						Input(map::Main & menu);

						void receiveInput(std::string const & input);
					private:
						map::Main & menu;

						Action getAction(std::string const & key) const;
					};
				}
			}
		}
	}
}
#endif // INCLUDE_GUARD
