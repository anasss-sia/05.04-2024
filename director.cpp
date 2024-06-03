#include "director.h"

Director::Director() {
    award = "NO";
}
Director::Director(string& name, int& year, string& award)
    :Person(name, year) {
    this->award = award;
}
Director::~Director() {};
string Director::getAward() {
    return award;
}
void Director::setAward(string& award) {
    this->award = award;
}
