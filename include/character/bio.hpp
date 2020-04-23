
#ifndef SAM_TACPG_CHARACTER_BIO_HPP_INCLUDED
#define SAM_TACPG_CHARACTER_BIO_HPP_INCLUDED

#include "character/birthdate.hpp"
#include "biography/gender.hpp"
#include "biography/name.hpp"
#include "biography/nationality.hpp"

#include <string>

namespace sam {
	namespace tacpg {
		namespace character {
			class Main;
			class Bio {
			public:
				Bio(Main & main);

				biography::Age const & getAge() const;
				biography::Gender getGender() const;
				biography::Name const & getName() const;
				void setAge(biography::Age age);
				void setGender(biography::Gender gender);
				void setName(biography::Name name);
				void setName(std::string first);
				void setName(std::string first, std::string last);
				void setName(std::string first, std::string middle, std::string last);
			private:
				Birthdate birthdate;
				biography::Gender gender;
				biography::Name name;
				biography::Nationality nationality;

				Main & character;
			};
		}
	}
}
#endif // INCLUDE_GUARD
