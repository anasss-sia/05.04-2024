#include "series.h"
#include <iostream>


Series::Series(std::string t, int ry, int ns, int ne) : Film(t, ry), numSeasons(ns), numEpisodes(ne) {}


void Series::displayInfo() const {
	Film::displayInfo();
	std::cout << "Number of Seasons: " << numSeasons << std::endl;
	std::cout << "Number of Episodes: " << numEpisodes << std::endl;
}


std::ostream& operator<<(std::ostream& os, const Series& s) {
	os << "Title: " << s.title << std::endl;
	os << "Release Year: " << s.releaseYear << std::endl;
	os << "Number of Seasons: " << s.numSeasons << std::endl;
	os << "Number of Episodes: " << s.numEpisodes << std::endl;
	return os;
}
