
#ifndef SAM_TACPG_OUTPUT_NAME_HPP_INCLUDED
#define SAM_TACPG_OUTPUT_NAME_HPP_INCLUDED

#include "data/gender.hpp"
#include "data/name.hpp"

#include <string>

namespace sam {
	namespace tacpg {
		namespace output {
			extern std::string name(data::Name const & name);
			extern std::string name(data::Name const & name, data::Gender const & gender);
		}
	}
}
#endif // INCLUDE_GUARD
