
#ifndef SAM_TACPG_MENU_GAME_CHARACTER_INPUT_HPP_INCLUDED
#define SAM_TACPG_MENU_GAME_CHARACTER_INPUT_HPP_INCLUDED

#include "menu/game/character/action.hpp"
#include "input/i_listener.hpp"

#include <string>

namespace sam {
	namespace tacpg {
		namespace menu {
			namespace game {
				namespace character {
					class Main;
					class Input : public input::IListener {
					public:
						Input(character::Main & menu);

						std::string const & getDisplayKeyBack() const;
						std::string const & getKeyBack() const;
						void receiveInput(std::string const & input);
					private:
						character::Main & menu;
						std::string keyBack;
						std::string displayKeyBack;

						Action getAction(std::string const & key) const;
					};
				}
			}
		}
	}
}
#endif // INCLUDE_GUARD
