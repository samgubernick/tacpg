
#include "utility/text.hpp"

#include "utility/values.hpp"

//#include <algorithm>

namespace topx	= sam::tacpg;
namespace cur	= topx::utility::text;

// undefined behavior for negative characters
void cur::convertToUpper(std::string const & src, std::string & dst) {
	//dst = src;
	
	//std::transform(std::begin(dst), std::end(dst), std::begin(dst), std::toupper);
}

bool cur::isNumber(std::string const & character) {
	if (character.size() > 0) {
		if (character.compare("0") == utility::values::MATCH) {
			return true;
		}

		if (character.compare("1") == utility::values::MATCH) {
			return true;
		}

		if (character.compare("2") == utility::values::MATCH) {
			return true;
		}

		if (character.compare("3") == utility::values::MATCH) {
			return true;
		}

		if (character.compare("4") == utility::values::MATCH) {
			return true;
		}

		if (character.compare("5") == utility::values::MATCH) {
			return true;
		}

		if (character.compare("6") == utility::values::MATCH) {
			return true;
		}

		if (character.compare("7") == utility::values::MATCH) {
			return true;
		}

		if (character.compare("8") == utility::values::MATCH) {
			return true;
		}

		if (character.compare("9") == utility::values::MATCH) {
			return true;
		}
	}

	return false;
}

bool cur::isLetter(std::string const & character) {
	if (character.size() > 0) {
		if (character.compare("a") == utility::values::MATCH) {
			return true;
		}

		if (character.compare("b") == utility::values::MATCH) {
			return true;
		}

		if (character.compare("c") == utility::values::MATCH) {
			return true;
		}

		if (character.compare("d") == utility::values::MATCH) {
			return true;
		}

		if (character.compare("e") == utility::values::MATCH) {
			return true;
		}

		if (character.compare("f") == utility::values::MATCH) {
			return true;
		}

		if (character.compare("g") == utility::values::MATCH) {
			return true;
		}

		if (character.compare("h") == utility::values::MATCH) {
			return true;
		}

		if (character.compare("i") == utility::values::MATCH) {
			return true;
		}

		if (character.compare("j") == utility::values::MATCH) {
			return true;
		}

		if (character.compare("k") == utility::values::MATCH) {
			return true;
		}

		if (character.compare("l") == utility::values::MATCH) {
			return true;
		}

		if (character.compare("m") == utility::values::MATCH) {
			return true;
		}

		if (character.compare("n") == utility::values::MATCH) {
			return true;
		}

		if (character.compare("o") == utility::values::MATCH) {
			return true;
		}

		if (character.compare("p") == utility::values::MATCH) {
			return true;
		}

		if (character.compare("q") == utility::values::MATCH) {
			return true;
		}

		if (character.compare("r") == utility::values::MATCH) {
			return true;
		}

		if (character.compare("s") == utility::values::MATCH) {
			return true;
		}

		if (character.compare("t") == utility::values::MATCH) {
			return true;
		}

		if (character.compare("u") == utility::values::MATCH) {
			return true;
		}

		if (character.compare("v") == utility::values::MATCH) {
			return true;
		}

		if (character.compare("w") == utility::values::MATCH) {
			return true;
		}

		if (character.compare("x") == utility::values::MATCH) {
			return true;
		}

		if (character.compare("y") == utility::values::MATCH) {
			return true;
		}

		if (character.compare("z") == utility::values::MATCH) {
			return true;
		}
	}

	return false;
}
