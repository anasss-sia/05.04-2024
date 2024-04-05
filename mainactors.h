#ifndef MAINACTORS_H 

#define MAINACTORS_H  
#include <iostream>
using namespace std;

class Mainactors {
private:

    string a_name;
    int a_year;


public:

    string get_aname() {
        return a_name;
    }
    int get_ayear() {
        return a_year;
    }


    void set_aname(string& a_name) {
        this->a_name = a_name;
    }
    void set_ayear(int a_year) {
        this->a_year = a_year;
    }

    Mainactors() {
        a_name = string("Joe");
        a_year = 0;
    }

    Mainactors(string& name, int year) {
        this->a_name = name;
        this->a_year = year;
    }
};
#endif //MAINACTOR_H
