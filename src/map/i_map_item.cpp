
#include "map/i_map_item.hpp"

namespace topx	= sam::tacpg;
namespace cur	= topx::map;

cur::IMapItem::IMapItem()
	: cellDisplayName("") {

}

cur::IMapItem::Allegiance cur::IMapItem::getAllegiance() const {
	return allegiance;
}

std::string const & cur::IMapItem::getCellDisplayName() const {
	return cellDisplayName;
}

cur::IMapItem::Type cur::IMapItem::getType() const {
	return type;
}

void cur::IMapItem::setAllegiance(cur::IMapItem::Allegiance allegiance) {
	this->allegiance = allegiance;
}

void cur::IMapItem::setCellDisplayName(std::string name) {
	this->cellDisplayName = std::move(name);
}

void cur::IMapItem::setType(cur::IMapItem::Type type) {
	this->type = type;
}
