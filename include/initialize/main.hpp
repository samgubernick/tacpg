
#ifndef SAM_TACPG_INITIALIZE_MAIN_HPP_INCLUDED
#define SAM_TACPG_INITIALIZE_MAIN_HPP_INCLUDED

#include "input/main.hpp"

namespace sam {
	namespace tacpg {
		namespace initialize {
			class Main {
			public:
				input::Main input;

				Main();

				void now();
			};
		}
	}
}
#endif // INCLUDE_GUARD
