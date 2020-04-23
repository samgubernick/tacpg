
#include "character/main.hpp"

namespace topx	= sam::tacpg;
namespace cur	= topx::character;

cur::Main::Main()
	: bio(*this) {

}

cur::Bio & cur::Main::getBio() {
	return bio;
}

cur::Stats & cur::Main::getStats() {
	return stats;
}

void cur::Main::move(double angle) {

}

void cur::Main::onCollect(topx::map::IMapItem & other) {

}

void cur::Main::onDeath() {

}

void cur::Main::onImpact(topx::map::IMapItem & other) {

}

void cur::Main::onMapMove() {

}
