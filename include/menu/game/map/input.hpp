
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

						std::string const & getDisplayKeyBack() const;
						std::string const & getDisplayKeyShow() const;
						std::string const & getDisplayKeyWhat() const;
						std::string const & getKeyBack() const;
						std::string const & getKeyShow() const;
						std::string const & getKeyWhat() const;
						void receiveInput(std::string const & input);
					private:
						map::Main & menu;
						std::string displayKeyBack;
						std::string displayKeyShow;
						std::string displayKeyWhat;
						std::string keyBack;
						std::string keyShow;
						std::string keyWhat;

						Action getAction(std::string const & key) const;
						void receiveWhat(std::string const & input);
					};
				}
			}
		}
	}
}
#endif // INCLUDE_GUARD
