#ifndef ACTOR_H
#define ACTOR_H

#include "person.h"

class Actor : public Person {
private:
    std::string countryOfBirth;

public:
    Actor(std::string n, int yob, std::string cob);
    void displayInfo() const;
    friend std::ostream& operator<<(std::ostream& os, const Actor& a);
};

#endif 
