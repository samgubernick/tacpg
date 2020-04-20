
#include "character/stats.hpp"

namespace topx	= sam::tacpg;
namespace cur	= topx::character;

cur::Stats::Stats()
	: health(0.0)
	, timeUnits(0.0) {

}

void cur::Stats::changeHealth(double amount) {
	health += amount;
}

void cur::Stats::changeTimeUnits(double amount) {
	timeUnits += amount;
}

double cur::Stats::getHealth() {
	return health;
}

double cur::Stats::getTimeUnits() {
	return timeUnits;
}

void cur::Stats::setHealth(double health) {
	this->health = health;
}

void cur::Stats::setTimeUnits(double timeUnits) {
	this->timeUnits = timeUnits;
}
