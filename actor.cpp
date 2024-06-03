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
