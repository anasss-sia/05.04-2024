#include "series.h"
using namespace std;

Series::Series(string title, int releaseYear, double rating, int numOfSeasons, int numOfEpisodes)
    : Film(title, releaseYear, rating), numOfSeasons(numOfSeasons), numOfEpisodes(numOfEpisodes) {}

void Series::getSeriesInfo() {
    getFilmInfo();
    cout << "Seasons: " << numOfSeasons << " - Episodes: " << numOfEpisodes << endl;
}
ostream& operator<<(ostream& os, const Series& f) {
    os << "Title: " << f.title << endl;
    os << "Release Year: " << f.releaseYear << endl;
    os << "Rating: " << f.rating << endl;
    return os;
