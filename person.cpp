#include "person.h"
#include <iostream>

Person::Person(std::string n, int yob) : name(n), yearOfBirth(yob) {}

std::string Person::getName() const {
    return name;
}

int Person::getYearOfBirth() const {
    return yearOfBirth;
}

void Person::displayInfo() const {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Year of Birth: " << yearOfBirth << std::endl;
}
