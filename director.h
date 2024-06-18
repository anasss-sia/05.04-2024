#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "person.h"

class Director : public Person {
private:
    std::string award;

public:
    Director(std::string n, int yob, std::string aw);
    void displayInfo() const;
    friend std::ostream& operator<<(std::ostream& os, const Director& d);
};

#endif

