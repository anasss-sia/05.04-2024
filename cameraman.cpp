#include "cameraman.h"

Cameraman::Cameraman() {
    bwork = "NO";
}
Cameraman::Cameraman(string& name, int& year, string& bwork)
    :Person(name, year) {
    this->bwork = bwork;
}
Cameraman::~Cameraman() {};
string Cameraman::getBwork() {
    return bwork;
}
void Cameraman::setBwork(string& bwork) {
    this->bwork = bwork;
