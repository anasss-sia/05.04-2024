#ifndef FILM_H
#define FILM_H

#include <iostream>
using namespace std;

class Film {
protected:
    string title;
    int releaseYear;
    double rating;

public:
    Film(string title, int releaseYear, double rating);

    void getFilmInfo();
};

#endif // FILM_H