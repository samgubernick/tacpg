
#ifndef SAM_TACPG_CHARACTER_BIRTHDATE_HPP_INCLUDED
#define SAM_TACPG_CHARACTER_BIRTHDATE_HPP_INCLUDED

#include "biography/age.hpp"

namespace sam {
	namespace tacpg {
		namespace character {
			class Birthdate {
			public:
				Birthdate();
				Birthdate(biography::Age age);

				biography::Age const & getAge() const;
				void setAge(biography::Age age);
				bool isDayValid(data::Month month, int day);
			private:
				biography::Age age;
			};
		}
	}
}
#endif // INCLUDE_GUARD
