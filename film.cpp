#include "film.h"

using namespace std;


Film::Film(string title, int releaseYear, double rating) : title(title), releaseYear(releaseYear), rating(rating) {}

void Film::getFilmInfo() {
    cout << "Film: " << title << " (" << releaseYear << ") - Rating: " << rating << endl;
}