#include "film.h"

Film::Film() {
    title = "";
    ryear = 0;
    rating = 0.0;
}

Film::Film(const string& title, int ryear, double rating) : title(title), ryear(ryear) {}

Film::~Film() {}

string Film::getTitle() const {
    return title;
}

void Film::setTitle(const string& title) {
    this->title = title;
}

int Film::getRyear() const {
    return ryear;
}

void Film::setRyear(int ryear) {
    this->ryear = ryear;
}


double Film::getRating() const {
    return rating;
}

void Film::setRating(int rating) {
    this->rating = rating;
}

ostream& operator<<(ostream& os, const Film& f) {
    os << "Film: " << f.getTitle() << ", Year of release: " << f.getRyear() << "Rating on Kinopoisk: " << f.getRyear();
    return os;
