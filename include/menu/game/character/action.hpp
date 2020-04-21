
#ifndef SAM_TACPG_MENU_GAME_CHARACTER_ACTION_HPP_INCLUDED
#define SAM_TACPG_MENU_GAME_CHARACTER_ACTION_HPP_INCLUDED

namespace sam {
	namespace tacpg {
		namespace menu {
			namespace game {
				namespace character {
					enum class Action {
						fire,
						gameMenu,
						jump,
						look,
						moveBackward,
						moveForward,
						showBio,
						showStats,
						turnLeft,
						turnRight,
						use,
						ignore,
					};
				}
			}
		}
	}
}
#endif // INCLUDE_GUARD
