
#ifndef FILM_H
#define FILM_H

#include <string>

class Film {
protected:
    std::string title;
    int releaseYear;

public:
    Film(std::string t, int ry);
    void displayInfo() const;
    friend std::ostream& operator<<(std::ostream& os, const Film& f);
};

#endif



  
