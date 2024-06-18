#include "cameramen.h"
#include <iostream>

Cameraman::Cameraman(std::string n, int yob, std::string bw) : Person(n, yob), bestWork(bw) {}

void Cameraman::displayInfo() const {
    Person::displayInfo();
    std::cout << "Best Work: " << bestWork << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Cameraman& c) {
    os << "Name: " << c.getName() << std::endl;
    os << "Year of Birth: " << c.getYearOfBirth() << std::endl;
    os << "Best Work: " << c.bestWork << std::endl;
    return os;
}
