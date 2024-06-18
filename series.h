#ifndef SERIES_H
#define SERIES_H

#include "film.h"

class Series : public Film {
private:
    int numSeasons;
    int numEpisodes;

public:
    Series(std::string t, int ry, int ns, int ne);
    void displayInfo() const;
    friend std::ostream& operator<<(std::ostream& os, const Series& s);
};

#endif
