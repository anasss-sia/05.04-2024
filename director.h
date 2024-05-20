#ifndef DIRECTOR_H 

#define DIRECTOR_H 
#include <iostream>
using namespace std;

class Director {
private:

    string d_name;
    int d_year;
    string award; 

public:

    string get_dname() {
        return d_name;
    }
    int get_dyear() {
        return d_year;
    }
    string get_award() {
        return award;
    }

    void set_dname(string& d_name) {
        this->d_name = d_name;
    }
    void set_dyear(int d_year) {
        this->d_year = d_year;
    }
    void set_award(string& award) {
        this->award = award;
    }

    Director() {
        d_name = string("Joe");
        d_year = 0;
        award = string("Grammy");
  
    }
    Director(string& name, int year, string& award) {
        this->d_name = d_name;
        this->d_year = d_year;
        this->award = award;
       
    }
 friend ostream& operator<<(ostream& os, const Director& director);
};

ostream& operator<<(ostream& os, const Director& director) {
    os << "Director: " << director.d_name << ", Year: " << director.d_year << ", Award: " << director.award << endl;
    return os;
}
#endif //DIRECTOR_H
