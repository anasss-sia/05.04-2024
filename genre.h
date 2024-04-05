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
};
#endif //GENRE_H
