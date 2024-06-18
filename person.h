#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
private:
    std::string name;
    int yearOfBirth;

public:
    Person(std::string n, int yob);
    std::string getName() const;
    int getYearOfBirth() const;
    virtual void displayInfo() const;
};

#endif
