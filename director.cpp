#include "director.h"
#include <iostream>

Director::Director(std::string n, int yob, std::string aw) : Person(n, yob), award(aw) {}

void Director::displayInfo() const {
    Person::displayInfo();
    std::cout << "Award: " << award << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Director& d) {
    os << "Name: " << d.getName() << std::endl;
    os << "Year of Birth: " << d.getYearOfBirth() << std::endl;
    os << "Award: " << d.award << std::endl;
    return os;
}
