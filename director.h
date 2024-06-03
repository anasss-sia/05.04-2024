#ifndef DIRECTOR_H
#define DIRECTOR_H

#include <iostream>
#include "person.h"

class Director : public Person {
protected:
    string award;
public:
    Director();
    Director(string& name, int& year, string& award);
    ~Director();
    virtual string getAward();
    void setAward(string& award);
};

#endif 

