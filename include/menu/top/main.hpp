
#ifndef SAM_TACPG_MENU_TOP_MAIN_HPP_INCLUDED
#define SAM_TACPG_MENU_TOP_MAIN_HPP_INCLUDED

#include "game/main.hpp"
#include "menu/top/action.hpp"
#include "menu/top/input.hpp"

#include <string>

namespace sam {
	namespace tacpg {
		namespace input {
			class Main;
		}
		namespace menu {
			namespace top {
				class Main {

				public:
					Main(input::Main & inputListener);

					void close();
					Input & getInputListener();
					void open();

					void exit();
					void invalidInput();
					void load();
					void play();
					void save();
				private:
					input::Main & inputListener;
					tacpg::game::Main game;
					Input input;

					void displayOptions();
				};
			}
		}
	}
}
#endif // INCLUDE_GUARD
