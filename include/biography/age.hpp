
#ifndef SAM_TACPG_BIOGRAPHY_AGE_HPP_INCLUDED
#define SAM_TACPG_BIOGRAPHY_AGE_HPP_INCLUDED

#include "data/month.hpp"

namespace sam {
	namespace tacpg {
		namespace biography {
			struct Age {
				Age();
				Age(int year, data::Month month, int day);

				int year;
				data::Month month;
				int day;
			};
		}
	}
}
#endif // INCLUDE_GUARD
