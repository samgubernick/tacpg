
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

					std::string const & getKeyExit() const;
					std::string const & getKeyLoad() const;
					std::string const & getKeyPlay() const;
					std::string const & getKeySave() const;
					void receiveInput(std::string const & input);
				private:
					Main & menu;
					std::string keyExit;
					std::string keyLoad;
					std::string keyPlay;
					std::string keySave;

					Action getAction(std::string const & key) const;
				};
			}
		}
	}
}
#endif // INCLUDE_GUARD
