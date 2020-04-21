
#ifndef SAM_TACPG_MENU_TOP_INPUT_HPP_INCLUDED
#define SAM_TACPG_MENU_TOP_INPUT_HPP_INCLUDED

#include "menu/top/action.hpp"
#include "input/i_listener.hpp"

#include <string>

namespace sam {
	namespace tacpg {
		namespace menu {
			namespace top {
				class Main;
				class Input : public input::IListener {
				public:
					Input(Main & menu);

					void receiveInput(std::string const & input);
				private:
					Main & menu;

					Action getAction(std::string const & key) const;
				};
			}
		}
	}
}
#endif // INCLUDE_GUARD
