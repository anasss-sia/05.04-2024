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

    friend ostream& operator<<(ostream& os, const Film& f);
};

ostream& operator<<(ostream& os, const Film& f);

#endif // FILM_H
