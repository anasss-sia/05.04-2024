#ifndef SERIES_H
#define SERIES_H

#include "film.h"
using namespace std;

class Series : public Film {
private:
    int numOfSeasons;
    int numOfEpisodes;

public:
    Series(string title, int releaseYear, double rating, int numOfSeasons, int numOfEpisodes);

    void getSeriesInfo();

friend ostream& operator<<(ostream& os, const Series& f);

};
ostream& operator<<(ostream& os, const Series& f);

#endif // SERIES_H
