
#include "map/cell.hpp"

namespace topx	= sam::tacpg;
namespace cur	= topx::map;

cur::Cell::Cell() {

}

void cur::Cell::attemptToAdd(cur::IMapItem & item) {
	items.push_back(&item);
}

cur::Cell::Ground cur::Cell::getGroundType() const {
	return groundType;
}

std::vector<cur::IMapItem *> & cur::Cell::getItems() {
	return items;
}

std::vector<cur::IMapItem *> const & cur::Cell::getItems() const {
	return items;
}

void cur::Cell::remove(cur::IMapItem & item) {
	auto it = std::find(std::begin(items), std::end(items), &item);
	if (it < std::end(items)) {
		items.erase(it);
	}
}

void cur::Cell::setGroundType(cur::Cell::Ground groundType) {
	this->groundType = groundType;
}
