#ifndef FILM_H 

#define FILM_H  
#include <iostream>
using namespace std;

class Film {
private:

    string title;
    int f_year;
    double rating;
    string country;


public:

    string get_title() {
        return title;
    }
    int get_ryear() {
        return f_year;
    }
    double get_rating() {
        return rating;
    }
    string get_country() {
        return country;
    }

    void set_title(string& title) {
        this->title = title;
    }
    void set_ryear(int r_year) {
        this->f_year = r_year;
    }
    void set_rating(double rating) {
        this->rating = rating;
    }
    void set_country(string& country) {
        this->country = country;
    }
    

    Film() {
        title = string("Fast");
        f_year = 0;
        rating = 0.0;
        country = string("Russiaaaaa");
    }

    Film(string& title, int f_year, double rating, string& country) {
        this->title = title;
        this->f_year = f_year;
        this->rating = rating;
        this->country = country;

    }
 friend ostream& operator<<(ostream& os, const Film& f);
};

ostream& operator<<(ostream& os, const Film& f) {
    os << "Film: " << f.title << endl;
    os << "Year of release: " << f.f_year << endl;
    os << "Rating on Kinopoisk: " << f.rating << endl;
    os << "Producing country: " << f.country << endl;
    return os;
}
#endif //FILM_H 

