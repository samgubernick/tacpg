
#include "map/main.hpp"


namespace topx	= sam::tacpg;
namespace cur	= topx::map;

namespace {
	auto const EMPTY	= cur::Size(0, 0);
	auto const SMALL	= cur::Size(8, 6);
	auto const MEDIUM	= cur::Size(11, 9);
	auto const LARGE	= cur::Size(15, 11);
}

cur::Main::Main() {

}

void cur::Main::clear() {
	cells.clear();
}

cur::Cell & cur::Main::getCell(size_t index) {
	if (cells.size() >= index) {
		auto it = std::begin(cells);
		std::advance(it, index);
		return *it;
	}

	return *cells.begin();
}

cur::Cell const & cur::Main::getCell(size_t index) const {
	if (cells.size() >= index) {
		auto it = std::begin(cells);
		std::advance(it, index);
		return *it;
	}

	return *cells.begin();
}

size_t cur::Main::getCellCount() const {
	return cells.size();
}

std::vector<cur::Cell> & cur::Main::getCells() {
	return cells;
}

std::vector<cur::Cell> const & cur::Main::getCells() const {
	return cells;
}

cur::Size const & cur::Main::getSize() const {
	return size;
}

cur::Size cur::Main::getSize(cur::PresetSize presetSize) const {
	switch (presetSize) {
		case PresetSize::small: {
			return SMALL;
		}
		case PresetSize::medium: {
			return MEDIUM;
		}
		case PresetSize::large: {
			return LARGE;
		}
		default: {
			return EMPTY;
		}
	}
}

void cur::Main::setSize(PresetSize presetSize) {
	auto size = getSize(presetSize);
	setSize(size);
}

void cur::Main::setHeight(size_t height) {
	size.height = height;
	setSize(size.width * size.height);
}

void cur::Main::setSize(Size & size) {
	this->size = size;

	setSize(size.width * size.height);
}

void cur::Main::setWidth(size_t width) {
	size.width = width;
	setSize(size.width * size.height);
}

//*****public*****
//****************
//*****private****

void cur::Main::setSize(size_t size) {
	cells.reserve(size);
	for (auto i = cells.size(); i < size; ++i) {
		cells.emplace_back();
	}
}
