
#ifndef SAM_TACPG_UTILITY_TEXT_HPP_INCLUDED
#define SAM_TACPG_UTILITY_TEXT_HPP_INCLUDED

#include <string>

namespace sam {
	namespace tacpg {
		namespace utility {
			namespace text {
				extern void convertToUpper(std::string const & src, std::string & dst);
				extern bool isNumber(std::string const & character);
				extern bool isLetter(std::string const & character);
			}
		}
	}
}
#endif // INCLUDE_GUARD
