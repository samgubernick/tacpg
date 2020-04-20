
#ifndef SAM_TACPG_INPUT_I_LISTENER_HPP_INCLUDED
#define SAM_TACPG_INPUT_I_LISTENER_HPP_INCLUDED

#include <string>

namespace sam {
	namespace tacpg {
		namespace input {
			class IListener {
			public:
				virtual ~IListener() {};
				virtual void receiveInput(std::string const & input) = 0;
			};
		}
	}
}
#endif // INCLUDE_GUARD
