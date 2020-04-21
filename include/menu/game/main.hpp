
#ifndef SAM_TACPG_MENU_GAME_HPP_INCLUDED
#define SAM_TACPG_MENU_GAME_HPP_INCLUDED

#include "input/i_listener.hpp"

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
			class Main;
			class Game : public input::IListener {
			public:
				enum class Action {
					turnLeft,
					turnRight,
					moveForward,
					moveBackward,
					look,
					use,
					fire,
					jump,
					showBio,
					showStats,
					pause,
					ignore,
				};
				enum class State {
					none,
					paused,
					running,
				};

				Game(input::Main & inputListener,
					 game::Main & game,
					 Main & mainMenu);

				void display();
				State getState();
				void newGame();
				Action now(std::string const & key);
				void receiveInput(std::string const & input);
			private:
				State state;
				input::Main & inputListener;
				Main & mainMenu;
				game::Main & game;

				void showBio(character::Main & character);
				void showStats(character::Main & character);
			};
		}
	}
}
#endif // INCLUDE_GUARD
