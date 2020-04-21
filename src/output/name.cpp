
#include "output/name.hpp"

#include "biography/gender.hpp"
#include "biography/name.hpp"

namespace topx	= sam::tacpg;
namespace cur	= topx::output;

std::string cur::name(topx::biography::Name const & name) {
	std::string result;
	result.append(name.first).append(" ")
		.append(name.middle).append(" ")
		.append(name.last);

	return std::move(result);
}

std::string cur::name(topx::biography::Name const & name, topx::biography::Gender const & gender) {
	std::string result;

	switch (gender) {
		case biography::Gender::female: {
			result.append("Ms. ");
			break;
		}
		case biography::Gender::male: {
			result.append("Mr. ");
			break;
		}
	}

	result.append(name.first).append(" ")
		.append(name.middle).append(" ")
		.append(name.last);

	return std::move(result);
}
