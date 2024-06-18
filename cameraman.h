#ifndef CAMERAMAN_H
#define CAMERAMAN_H

#include "person.h"

class Cameraman : public Person {
private:
    std::string bestWork;

public:
    Cameraman(std::string n, int yob, std::string bw);
    void displayInfo() const;
    friend std::ostream& operator<<(std::ostream& os, const Cameraman& c);
};

#endif
