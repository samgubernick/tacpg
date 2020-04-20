
#include "map/cell.hpp"

namespace topx	= sam::tacpg;
namespace cur	= topx::map;

cur::Cell::Cell() {

}

void cur::Cell::attemptToAdd(cur::IMapItem & item) {

}

cur::Cell::Ground cur::Cell::getGroundType() {
	return ground;
}

std::vector<cur::IMapItem *> & cur::Cell::getItems() {
	return items;
}

void cur::Cell::remove(cur::IMapItem & item) {
	auto it = std::find(std::begin(items), std::end(items), &item);
	if (it < std::end(items)) {
		items.erase(it);
	}
}
