
#ifndef SAM_TACPG_UTILITY_LETTER_HPP_INCLUDED
#define SAM_TACPG_UTILITY_LETTER_HPP_INCLUDED

#include "data/letter.hpp"

#include <string>

namespace sam {
	namespace tacpg {
		namespace utility {
			namespace letter {
				extern data::Letter getLetter(std::string const & character);
				extern std::string getCharLower(data::Letter letter);
				extern std::string getCharUpper(data::Letter letter);
			};
		}
	}
}
#endif // INCLUDE_GUARD
