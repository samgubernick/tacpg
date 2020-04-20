
#include "output/age.hpp"

#include "character/age.hpp"

namespace topx	= sam::tacpg;
namespace cur	= topx::output;

namespace {
	std::string getMonthName(topx::data::Month month) {
		switch (month) {
			case topx::data::Month::jan: {
				return std::move(std::string("January"));
			}
			case topx::data::Month::feb: {
				return std::move(std::string("February"));
			}
			case topx::data::Month::mar: {
				return std::move(std::string("March"));
			}
			case topx::data::Month::apr: {
				return std::move(std::string("April"));
			}
			case topx::data::Month::may: {
				return std::move(std::string("May"));
			}
			case topx::data::Month::jun: {
				return std::move(std::string("June"));
			}
			case topx::data::Month::jul: {
				return std::move(std::string("July"));
			}
			case topx::data::Month::aug: {
				return std::move(std::string("August"));
			}
			case topx::data::Month::sep: {
				return std::move(std::string("September"));
			}
			case topx::data::Month::oct: {
				return std::move(std::string("October"));
			}
			case topx::data::Month::nov: {
				return std::move(std::string("November"));
			}
			case topx::data::Month::dec: {
				return std::move(std::string("December"));
			}
			default: {
				return std::move(std::string());
			}
		}
	}
}

std::string cur::age(topx::character::Age const & age) {
	std::string result;

	result.append(getMonthName(age.month)).append(" ")
		.append(std::to_string(age.day)).append(", ")
		.append(std::to_string(age.year));

	return std::move(result);
}
