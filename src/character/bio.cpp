
#include "character/bio.hpp"

namespace topx	= sam::tacpg;
namespace cur	= topx::character;

cur::Bio::Bio() {

}

topx::biography::Age const & cur::Bio::getAge() const {
	return birthdate.getAge();
}

topx::biography::Gender cur::Bio::getGender() const {
	return gender;
}

topx::biography::Name const & cur::Bio::getName() const {
	return name;
}

void cur::Bio::setAge(topx::biography::Age age) {
	this->birthdate.setAge(age);
}

void cur::Bio::setGender(topx::biography::Gender gender) {
	this->gender = gender;
}

void cur::Bio::setName(topx::biography::Name name) {
	this->name = name;
}

void cur::Bio::setName(std::string first) {
	this->name.first = first;
}

void cur::Bio::setName(std::string first, std::string last) {
	this->name.first = first;
	this->name.last = last;
}

void cur::Bio::setName(std::string first, std::string middle, std::string last) {
	this->name.first = first;
	this->name.middle = middle;
	this->name.last = last;
}
