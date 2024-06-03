#ifndef CAMERAMAN_H
#define CAMERAMAN_H

#include <iostream>
#include "person.h"

class Cameraman : public Person {
protected:
    string bwork;
public:
    Cameraman();
    Cameraman(string& name, int& year, string& bwork);
    ~Cameraman();
    virtual string getBwork();
    void setBwork(string& bwork);
};

#endif 
