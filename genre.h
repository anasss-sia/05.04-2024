#ifndef GENRE_H
#define GENRE_H
#include <iostream>
using namespace std;

class Genre {
private:
    string g_name;

public:
    string get_name() {
        return g_name;
    }
    void set_name(string& g_name) {
        this->g_name = g_name;

    }
    Genre() {
        g_name = string("horror");
    }
    Genre(string& g_name) {
        this->g_name = g_name;
    } 
friend ostream& operator<<(ostream& os, const Genre& g);
};

ostream& operator<<(ostream& os, const Genre& g) {
    os << "Genre: " << g.g_name << endl;
    return os;
}
#endif //GENRE_H
