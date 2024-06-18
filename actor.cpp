#include "actor.h"

Actor::Actor() {
    country = "NO";
}
Actor::Actor(string& name, int& year, string& coutry)
    :Person(name, year) {
    this->country = country;
}
Actor::~Actor() {};
string Actor::getCountry() {
    return country;
}
void Actor::setCountry(string& country) {
    this->country = country;
}

ostream& operator<<(ostream& os, const Actor& a) {
    os << "Name: " << a.getName() << ", Year: " << a.getYear();
    return os;
}
