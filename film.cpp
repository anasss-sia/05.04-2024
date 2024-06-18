#include "film.h"
#include <iostream>

Film::Film(std::string t, int ry) : title(t), releaseYear(ry) {}

void Film::displayInfo() const {
    std::cout << "Title: " << title << std::endl;
    std::cout << "Release Year: " << releaseYear << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Film& f) {
    os << "Title: " << f.title << std::endl;
    os << "Release Year: " << f.releaseYear << std::endl;
    return os;
}
