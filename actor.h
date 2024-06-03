#ifndef ACTOR_H
#define ACTOR_H

#include <iostream>
#include "person.h"

class Actor : public Person {
protected:
    string country;
public:
    Actor();
    Actor(string& name, int& year, string& country);
    ~Actor();
    virtual string getCountry();
    void setCountry(string& country);
};

#endif 
