#ifndef MAINACTORS_H
#define MAINACTORS_H

#include <string>

class MainActor {
public:
    std::string firstName;
    std::string lastName;
    int birthYear;
    std::string awards;

    MainActor(std::string first, std::string last, int year, std::string a);
};

#endif