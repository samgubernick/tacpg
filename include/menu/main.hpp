
#ifndef SAM_TACPG_MENU_MAIN_HPP_INCLUDED
#define SAM_TACPG_MENU_MAIN_HPP_INCLUDED

#include "input/i_listener.hpp"
#include "game/main.hpp"

#include <string>

namespace sam {
	namespace tacpg {
		namespace input {
			class Main;
		}
		namespace menu {
			class Main : public input::IListener {
				enum class Action {
					exit,
					ignore,
					load,
					play,
					save,
				};

			public:
				Main(input::Main & inputListener);

				void display();
				Action now(std::string const & key);
				void receiveInput(std::string const & input);
			private:
				input::Main & inputListener;
				game::Main game;
			};
		}
	}
}
#endif // INCLUDE_GUARD
