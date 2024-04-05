#ifndef CAMERAMAN_H 

#define CAMERAMAN_H  
#include <iostream>
using namespace std;

class  Cameraman {
private:

    string c_name;
    string bwork;

public:

    string get_cname() {
        return c_name;
    }
    string get_bwork() {
        return bwork;
    }

    void set_dname(string& c_name) {
        this->c_name = c_name;
    }
    void set_bwork(string& bwork) {
        this->bwork = bwork;
    }

    Cameraman() {
        c_name = string("Joe");
        bwork = string("Film");

    }
    Cameraman(string& name, string& bwork) {
        this->c_name = c_name;
        this->bwork = bwork;

    }
};
#endif //CAMERAMAN_H
