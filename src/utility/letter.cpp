
#include "utility/letter.hpp"

#include "utility/values.hpp"

namespace topx	= sam::tacpg;
namespace cur	= topx::utility::letter;

topx::data::Letter cur::getLetter(std::string const & character) {
	if (character.compare("a") == topx::utility::values::MATCH) {
		return data::Letter::a;
	}
	if (character.compare("b") == topx::utility::values::MATCH) {
		return data::Letter::b;
	}
	if (character.compare("c") == topx::utility::values::MATCH) {
		return data::Letter::c;
	}
	if (character.compare("d") == topx::utility::values::MATCH) {
		return data::Letter::d;
	}
	if (character.compare("e") == topx::utility::values::MATCH) {
		return data::Letter::e;
	}
	if (character.compare("f") == topx::utility::values::MATCH) {
		return data::Letter::f;
	}
	if (character.compare("g") == topx::utility::values::MATCH) {
		return data::Letter::g;
	}
	if (character.compare("h") == topx::utility::values::MATCH) {
		return data::Letter::h;
	}
	if (character.compare("i") == topx::utility::values::MATCH) {
		return data::Letter::i;
	}
	if (character.compare("j") == topx::utility::values::MATCH) {
		return data::Letter::j;
	}
	if (character.compare("k") == topx::utility::values::MATCH) {
		return data::Letter::k;
	}
	if (character.compare("l") == topx::utility::values::MATCH) {
		return data::Letter::l;
	}
	if (character.compare("m") == topx::utility::values::MATCH) {
		return data::Letter::m;
	}
	if (character.compare("n") == topx::utility::values::MATCH) {
		return data::Letter::n;
	}
	if (character.compare("o") == topx::utility::values::MATCH) {
		return data::Letter::o;
	}
	if (character.compare("p") == topx::utility::values::MATCH) {
		return data::Letter::p;
	}
	if (character.compare("q") == topx::utility::values::MATCH) {
		return data::Letter::q;
	}
	if (character.compare("r") == topx::utility::values::MATCH) {
		return data::Letter::r;
	}
	if (character.compare("s") == topx::utility::values::MATCH) {
		return data::Letter::s;
	}
	if (character.compare("t") == topx::utility::values::MATCH) {
		return data::Letter::t;
	}
	if (character.compare("u") == topx::utility::values::MATCH) {
		return data::Letter::u;
	}
	if (character.compare("v") == topx::utility::values::MATCH) {
		return data::Letter::v;
	}
	if (character.compare("w") == topx::utility::values::MATCH) {
		return data::Letter::w;
	}
	if (character.compare("x") == topx::utility::values::MATCH) {
		return data::Letter::x;
	}
	if (character.compare("y") == topx::utility::values::MATCH) {
		return data::Letter::y;
	}
	if (character.compare("z") == topx::utility::values::MATCH) {
		return data::Letter::z;
	}

	return data::Letter::invalid;
}

std::string cur::getCharLower(topx::data::Letter letter) {
	switch (letter) {
		case data::Letter::a: {
			return std::move(std::string("a"));
		}
		case data::Letter::b: {
			return std::move(std::string("b"));
		}
		case data::Letter::c: {
			return std::move(std::string("c"));
		}
		case data::Letter::d: {
			return std::move(std::string("d"));
		}
		case data::Letter::e: {
			return std::move(std::string("e"));
		}
		case data::Letter::f: {
			return std::move(std::string("f"));
		}
		case data::Letter::g: {
			return std::move(std::string("g"));
		}
		case data::Letter::h: {
			return std::move(std::string("h"));
		}
		case data::Letter::i: {
			return std::move(std::string("i"));
		}
		case data::Letter::j: {
			return std::move(std::string("j"));
		}
		case data::Letter::k: {
			return std::move(std::string("k"));
		}
		case data::Letter::l: {
			return std::move(std::string("l"));
		}
		case data::Letter::m: {
			return std::move(std::string("m"));
		}
		case data::Letter::n: {
			return std::move(std::string("n"));
		}
		case data::Letter::o: {
			return std::move(std::string("o"));
		}
		case data::Letter::p: {
			return std::move(std::string("p"));
		}
		case data::Letter::q: {
			return std::move(std::string("q"));
		}
		case data::Letter::r: {
			return std::move(std::string("r"));
		}
		case data::Letter::s: {
			return std::move(std::string("s"));
		}
		case data::Letter::t: {
			return std::move(std::string("t"));
		}
		case data::Letter::u: {
			return std::move(std::string("u"));
		}
		case data::Letter::v: {
			return std::move(std::string("v"));
		}
		case data::Letter::w: {
			return std::move(std::string("w"));
		}
		case data::Letter::x: {
			return std::move(std::string("x"));
		}
		case data::Letter::y: {
			return std::move(std::string("y"));
		}
		case data::Letter::z: {
			return std::move(std::string("z"));
		}
	}
}

std::string cur::getCharUpper(topx::data::Letter letter) {
	switch (letter) {
		case data::Letter::a: {
			return std::move(std::string("A"));
		}
		case data::Letter::b: {
			return std::move(std::string("B"));
		}
		case data::Letter::c: {
			return std::move(std::string("C"));
		}
		case data::Letter::d: {
			return std::move(std::string("D"));
		}
		case data::Letter::e: {
			return std::move(std::string("E"));
		}
		case data::Letter::f: {
			return std::move(std::string("F"));
		}
		case data::Letter::g: {
			return std::move(std::string("G"));
		}
		case data::Letter::h: {
			return std::move(std::string("H"));
		}
		case data::Letter::i: {
			return std::move(std::string("I"));
		}
		case data::Letter::j: {
			return std::move(std::string("J"));
		}
		case data::Letter::k: {
			return std::move(std::string("K"));
		}
		case data::Letter::l: {
			return std::move(std::string("L"));
		}
		case data::Letter::m: {
			return std::move(std::string("M"));
		}
		case data::Letter::n: {
			return std::move(std::string("N"));
		}
		case data::Letter::o: {
			return std::move(std::string("O"));
		}
		case data::Letter::p: {
			return std::move(std::string("P"));
		}
		case data::Letter::q: {
			return std::move(std::string("Q"));
		}
		case data::Letter::r: {
			return std::move(std::string("R"));
		}
		case data::Letter::s: {
			return std::move(std::string("S"));
		}
		case data::Letter::t: {
			return std::move(std::string("T"));
		}
		case data::Letter::u: {
			return std::move(std::string("U"));
		}
		case data::Letter::v: {
			return std::move(std::string("V"));
		}
		case data::Letter::w: {
			return std::move(std::string("W"));
		}
		case data::Letter::x: {
			return std::move(std::string("X"));
		}
		case data::Letter::y: {
			return std::move(std::string("Y"));
		}
		case data::Letter::z: {
			return std::move(std::string("Z"));
		}
	}
}
