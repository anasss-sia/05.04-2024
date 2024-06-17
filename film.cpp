#include "Film.h"

Film::Film(string title, int releaseYear, double rating)
    : title(title), releaseYear(releaseYear), rating(rating) {}

void Film::getFilmInfo() {
    cout << "Title: " << title << endl;
    cout << "Release Year: " << releaseYear << endl;
    cout << "Rating: " << rating << endl;
}

ostream& operator<<(ostream& os, const Film& f) {
    os << "Title: " << f.title << endl;
    os << "Release Year: " << f.releaseYear << endl;
    os << "Rating: " << f.rating << endl;
    return os;
}
