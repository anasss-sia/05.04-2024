#include "actor.h"
#include <iostream>

Actor::Actor(std::string n, int yob, std::string cob) : Person(n, yob), countryOfBirth(cob) {}

void Actor::displayInfo() const {
    Person::displayInfo();
    std::cout << "Country of Birth: " << countryOfBirth << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Actor& a) {
    os << "Name: " << a.getName() << std::endl;
    os << "Year of Birth: " << a.getYearOfBirth() << std::endl;
    os << "Country of Birth: " << a.countryOfBirth << std::endl;
    return os;
}
