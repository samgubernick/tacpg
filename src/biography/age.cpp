
#include "biography/age.hpp"

namespace topx	= sam::tacpg;
namespace cur	= topx::biography;

cur::Age::Age() {

}

cur::Age::Age(int year, topx::data::Month month, int day) {
	this->year = year;
	this->month = month;
	this->day = day;
}
