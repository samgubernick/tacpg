
#include "character/birthdate.hpp"

namespace topx	= sam::tacpg;
namespace cur	= topx::character;

cur::Birthdate::Birthdate() {

}

cur::Birthdate::Birthdate(topx::biography::Age age) {
	setAge(age);
}

topx::biography::Age const & cur::Birthdate::getAge() const {
	return age;
}

void cur::Birthdate::setAge(topx::biography::Age age) {
	this->age.year = age.year;
	this->age.month = age.month;

	if (isDayValid(age.month, age.day)) {
		this->age.day = age.day;
	}
	else {
		this->age.day = 1;
	}
}

bool cur::Birthdate::isDayValid(topx::data::Month month, int day) {
	if (day <= 0) {
		return false;
	}

	switch (month) {
		case data::Month::jan: {
			return day <= 31;
		}
		case data::Month::feb: {
			return day <= 28;
		}
		case data::Month::mar: {
			return day <= 31;
		}
		case data::Month::apr: {
			return day <= 30;
		}
		case data::Month::may: {
			return day <= 31;
		}
		case data::Month::jun: {
			return day <= 30;
		}
		case data::Month::jul: {
			return day <= 31;
		}
		case data::Month::aug: {
			return day <= 31;
		}
		case data::Month::sep: {
			return day <= 30;
		}
		case data::Month::oct: {
			return day <= 31;
		}
		case data::Month::nov: {
			return day <= 30;
		}
		case data::Month::dec: {
			return day <= 31;
		}
		default: {
			return false;
		}
	}
}
