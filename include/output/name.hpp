
#ifndef SAM_TACPG_OUTPUT_NAME_HPP_INCLUDED
#define SAM_TACPG_OUTPUT_NAME_HPP_INCLUDED

#include "biography/gender.hpp"
#include "biography/name.hpp"

#include <string>

namespace sam {
	namespace tacpg {
		namespace output {
			extern std::string name(biography::Name const & name);
			extern std::string name(biography::Name const & name, biography::Gender const & gender);
		}
	}
}
#endif // INCLUDE_GUARD
