
#ifndef SAM_TACPG_OUTPUT_AGE_HPP_INCLUDED
#define SAM_TACPG_OUTPUT_AGE_HPP_INCLUDED

#include <string>

namespace sam {
	namespace tacpg {
		namespace biography {
			struct Age;
		}
		namespace output {
			extern std::string age(biography::Age const & age);
		}
	}
}
#endif // INCLUDE_GUARD
