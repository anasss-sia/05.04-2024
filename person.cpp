#include "person.h"

string Person::getName() {
    return name;
}
void Person::setName(string& name) {
    this->name = name;
}
int Person::getYear() {
    return year;
}
void Person::setYear(int year) {
    this->year = year;
}

Person::Person() {
    name = "NO";
    year = 0;
}
Person::Person(string& name, int& age) {
    this->name = name;
    this->year = year;
    
}
Person::~Person() {};