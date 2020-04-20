
#ifndef SAM_TACPG_INPUT_MAIN_HPP_INCLUDED
#define SAM_TACPG_INPUT_MAIN_HPP_INCLUDED

#include "input/i_listener.hpp"

namespace sam {
	namespace tacpg {
		namespace input {
			class Main {
			public:
				Main();

				IListener & getListener();
				void setListener(IListener & listener);
				void startListening();
				void stopListening();
			private:
				bool listening;
				IListener * listener;
			};
		}
	}
}
#endif // INCLUDE_GUARD
