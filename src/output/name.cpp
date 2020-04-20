
#include "output/name.hpp"

#include "data/gender.hpp"
#include "data/name.hpp"

namespace topx	= sam::tacpg;
namespace cur	= topx::output;

std::string cur::name(topx::data::Name const & name) {
	std::string result;
	result.append(name.first).append(" ")
		.append(name.middle).append(" ")
		.append(name.last);

	return std::move(result);
}

std::string cur::name(topx::data::Name const & name, topx::data::Gender const & gender) {
	std::string result;

	switch (gender) {
		case data::Gender::female: {
			result.append("Ms. ");
			break;
		}
		case data::Gender::male: {
			result.append("Mr. ");
			break;
		}
	}

	result.append(name.first).append(" ")
		.append(name.middle).append(" ")
		.append(name.last);

	return std::move(result);
}
