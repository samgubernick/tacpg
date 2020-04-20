
#ifndef SAM_TACPG_BIOGRAPHY_NAME_HPP_INCLUDED
#define SAM_TACPG_BIOGRAPHY_NAME_HPP_INCLUDED

#include <string>

namespace sam {
	namespace tacpg {
		namespace biography {
			struct Name {
				std::string first;
				std::string middle;
				std::string last;
			};
		}
	}
}
#endif // INCLUDE_GUARD
