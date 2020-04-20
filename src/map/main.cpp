
#include "map/main.hpp"


namespace topx	= sam::tacpg;
namespace cur	= topx::map;

namespace {
	constexpr auto const SMALL = 10 * 10;
	constexpr auto const MEDIUM = 20 * 20;
	constexpr auto const LARGE = 30 * 30;
}

cur::Main::Main() {

}

void cur::Main::clear() {
	cells.clear();
}

void cur::Main::setSize(Size sizeEnum) {
	auto size = getSize(sizeEnum);
	cells.reserve(size);
	for (auto i = size_t{ 0 }; i < size; ++i) {
		cells.emplace_back();
	}
}

//*****public*****
//****************
//*****private****

size_t cur::Main::getSize(Size size) {
	switch (size) {
		case Size::small: {
			return SMALL;
		}
		case Size::medium: {
			return MEDIUM;
		}
		case Size::large: {
			return LARGE;
		}
		default: {
			return 0;
		}
	}
}
