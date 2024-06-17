#include "person.h"

Person::Person() {
    name = "";
    year = 0;
}

Person::Person(const string& name, int year) : name(name), year(year) {}

Person::~Person() {}

string Person::getName() const {
    return name;
}

void Person::setName(const string& name) {
    this->name = name;
}

int Person::getYear() const {
    return year;
}

void Person::setYear(int year) {
    this->year = year;
}

ostream& operator<<(ostream& os, const Person& p) {
    os << "Name: " << p.getName() << ", Year: " << p.getYear();
    return os;
}
