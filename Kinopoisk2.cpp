#include <iostream>
#include "film.h"
#include "genre.h"
#include "mainactors.h"
#include "director.h"
#include "cameraman.h"


using namespace std;

ostream& operator<<(ostream& os, const Film& f);
ostream& operator<<(ostream& os, const Genre& g);
ostream& operator<<(ostream& os, const Mainactors& a);
ostream& operator<<(ostream& os, const Director& d);

int main()
{

    string title1("'2+1'");
    string g_name1("Comedy");
    string country1("France");;
    string a_name1("Omar Si");
    string d_name1("Hugo Gelin");
    string s_name1("Eugenio Derber");
    string award1("Nominated for 'Best Debut work'");
    string c_name1("Nicolas Massart");
    string bwork1("'Swap places'"); 


    string title2("'Office romance. Our time'");
    string g_name2("Drama");
    string country2("Russia");;
    string a_name2("Vladimir Zelenskiy");
    string d_name2("Sarik Andreasyan");
    string award2("No awards");
    string s_name2("Nikolay Kovbas");
    string c_name2("Peter Bratersky");
    string bwork2("'9 months'");


    string title3("'Shutter Island'");
    string g_name3("Thriller");
    string country3("USA");
    string a_name3("Leonardo DiCaprio");
    string d_name3("Martin Scorsese");
    string award3("Oscar, 2007");
    string s_name3("Laeta Kalogridis");
    string c_name3("Robert Richardson");
    string bwork3("'Django Unchained'");



    cout << "Films on Kinopoisk" << endl << endl;


    Film a(title1, 2016, 7.3, country1);
    cout << "Film: " << a.get_title() << endl;
    cout << "Year of release: " << a.get_ryear() << endl;
    cout << "Rating on Kinopoisk: " << a.get_rating() << endl;
    cout << "Producting country: " << a.get_country() << endl;
    Genre b(g_name1);
    cout << "Genre of film: " << b.get_name() << endl;
    Mainactors c(a_name1, 1987);
    cout << "Main actor: " << c.get_aname() << endl;
    cout << "Birth year of the actor: " << c.get_ayear() << endl;
    Director d(d_name1, 1980, award1);
    cout << "Director: " << d.get_award() << endl;
    cout << "Birth year of the director: " << d.get_dyear() << endl;
    cout << "Award: " << d.get_award() << endl;
    Cameraman cmn1(c_name1, bwork1);
    cout << "Cameraman: " << cmn1.get_cname() << endl;
    cout << "Best work: " << cmn1.get_bwork() << endl << endl;





    Film e(title2, 2011, 4.1, country2);
    cout << "Film: " << e.get_title() << endl;
    cout << "Year of release: " << e.get_ryear() << endl;
    cout << "Rating on Kinopoisk: " << e.get_rating() << endl;
    cout << "Producting country: " << e.get_country() << endl;
    Genre f(g_name2);
    cout << "Genre of film: " << f.get_name() << endl;
    Mainactors g(a_name2, 1978);
    cout << "Main actor: " << g.get_aname() << endl;
    cout << "Birth year of the actor: " << g.get_ayear() << endl;
    Director h(d_name2, 1984, award2);
    cout << "Director: " << h.get_award() << endl;
    cout << "Birth year of the director: " << h.get_dyear() << endl;
    cout << "Award: " << h.get_award() << endl;
    Cameraman cmn2(c_name2, bwork2);
    cout << "Cameraman: " << cmn2.get_cname() << endl;
    cout << "Best work: " << cmn2.get_bwork() << endl << endl;


    Film i(title3, 2008, 8.5, country3);
    cout << "Film: " << i.get_title() << endl;
    cout << "Year of release: " << i.get_ryear() << endl;
    cout << "Rating on Kinopoisk: " << i.get_rating() << endl;
    cout << "Producting country: " << i.get_country() << endl;
    Genre j(g_name3);
    cout << "Genre of film: " << j.get_name() << endl;
    Mainactors k(a_name3, 1974);
    cout << "Main actor: " << k.get_aname() << endl;
    cout << "Birth year of the actor: " << k.get_ayear() << endl;
    Director o(d_name3, 1942, award3);
    cout << "Director: " << o.get_award() << endl;
    cout << "Birth year of the director: " << o.get_dyear() << endl;
    cout << "Award: " << o.get_award() << endl;
    Cameraman cmn3(c_name3, bwork3);
    cout << "Cameraman: " << cmn3.get_cname() << endl;
    cout << "Best work: " << cmn3.get_bwork() << endl;


    return 0;
}