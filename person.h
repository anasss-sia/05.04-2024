#ifndef PERSON_H
#define PERSON_H

#include <iostream>

using namespace std;

class Person {
private:
    string name;
    int year;
    
public:
    Person();
    Person(string& name, int& year);
    ~Person();
    string getName();
    void setName(string& name);
    int getYear();
    void setYear(int year);
    

    inline friend ostream& operator<<(ostream& os, const Person& p);
};
ostream& operator<<(ostream& os, const Person& p) {
    os << "Real name: " << p.name;
    return os;
}
#endif //PERSON_H
