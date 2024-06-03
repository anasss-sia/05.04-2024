#include "series.h"
using namespace std;

Series::Series(string title, int releaseYear, double rating, int numOfSeasons, int numOfEpisodes)
    : Film(title, releaseYear, rating), numOfSeasons(numOfSeasons), numOfEpisodes(numOfEpisodes) {}

void Series::getSeriesInfo() {
    getFilmInfo();
    cout << "Seasons: " << numOfSeasons << " - Episodes: " << numOfEpisodes << endl;
}