#include <iostream>
#include "actor.h"
#include "cameramen.h"
#include "director.h"
#include "film.h"
#include "series.h"

int main() {
    Actor actor0("Brad Pitt", 1963, "USA");
    Cameraman cameraman0("Roger Deakins", 1949, "Blade Runner 2049");
    Director director0("Christopher Nolan", 1970, "Oscar for Best Director");
    Film film0("Inception", 2010);

    Actor actor1("Omar Si", 1981, "France");
    Cameraman cameraman1("Nicolas Massart", 1972, "Swap places");
    Director director1("Hugo Gelin", 1974, "Nominated for 'Best Debut work");
    Film film1("2 + 1", 2011);

    Actor actor2("Vladimir Zelenskiy", 1978, "Ukrain");
    Cameraman cameraman2("Nikolay Kovbas", 1985, "9 months");
    Director director2("Sarik Andreasyan", 1982, "No awards");
    Film film2("Office romance.Our time", 2018);

    Actor actor3("Leonardo DiCaprio", 1974, "USA");
    Cameraman cameraman3("Robert Richardson", 1955, "Django Unchained");
    Director director3("Martin Scorsese", 1942, "Oscar, 2007");
    Film film3("Shutter Island", 2010);

    Series series("Shameless", 2011, 11, 134);
    Actor actor4("William H.Macy", 1950, "USA");
    Cameraman cameraman4("John Wells", 1968, "Stranger");
    Director director4("Sheila Callahan", 1965, "No awards");
   



    std::cout << "Film Information:" << std::endl;
    std::cout << film0 << std::endl;
    std::cout << "Actor Information:" << std::endl;
    std::cout << actor0 << std::endl;
    std::cout << "Cameraman Information:" << std::endl;
    std::cout << cameraman0 << std::endl;
    std::cout << "Director Information:" << std::endl;
    std::cout << director0 << std::endl;


    std::cout << "Film Information:" << std::endl;
    std::cout << film1 << std::endl;
    std::cout << "Actor Information:" << std::endl;
    std::cout << actor1 << std::endl;
    std::cout << "Cameraman Information:" << std::endl;
    std::cout << cameraman1 << std::endl;
    std::cout << "Director Information:" << std::endl;
    std::cout << director1 << std::endl;

    std::cout << "Film Information:" << std::endl;
    std::cout << film2 << std::endl;
    std::cout << "Actor Information:" << std::endl;
    std::cout << actor2 << std::endl;
    std::cout << "Cameraman Information:" << std::endl;
    std::cout << cameraman2 << std::endl;
    std::cout << "Director Information:" << std::endl;
    std::cout << director2 << std::endl;

    std::cout << "Film Information:" << std::endl;
    std::cout << film3 << std::endl;
    std::cout << "Actor Information:" << std::endl;
    std::cout << actor3 << std::endl;
    std::cout << "Cameraman Information:" << std::endl;
    std::cout << cameraman3 << std::endl;
    std::cout << "Director Information:" << std::endl;
    std::cout << director3 << std::endl;

    

   std::cout << "Series Information:" << std::endl;
   std::cout << series << std::endl;

    return 0;
}
