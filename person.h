#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    int year;

public:
    Person();
    Person(const string& name, int year);
    ~Person();
    string getName() const;
    void setName(const string& name);
    int getYear() const;
    void setYear(int year);

    friend ostream& operator<<(ostream& os, const Person& p);
};

#endif // PERSON_H
