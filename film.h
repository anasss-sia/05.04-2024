#ifndef FILM_H
#define FILM_H

#include <iostream>
#include <string>
using namespace std;

class Film {
protected:
    string title;
    int ryear;
    double rating;

public:
    Film();
    Film(const string& title, int ryear, double rating);
    ~Film();
    string getTitle() const;
    void setTitle(const string& title);
    int getRyear() const;
    void setRyear(int ryear);
    double getRating() const;
    void setRating(int rating);

    friend ostream& operator<<(ostream& os, const Film& f);
};

#endif // FILM_H



  
