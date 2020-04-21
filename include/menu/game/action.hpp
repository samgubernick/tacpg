
#ifndef SAM_TACPG_MENU_GAME_ACTION_HPP_INCLUDED
#define SAM_TACPG_MENU_GAME_ACTION_HPP_INCLUDED

namespace sam {
	namespace tacpg {
		namespace menu {
			namespace game {
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
			}
		}
	}
}
#endif // INCLUDE_GUARD
