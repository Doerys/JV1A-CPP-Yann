#ifndef LIEU_H
#define LIEU_H

#include <string>
#include <vector>
using namespace std;

class Lieu {

private:

    std::string nomLieu;
    std::string descriptionLieu;
    int difficulteLieu;
    std::vector<string> lieuxAccessibles;

public:
    void showDescription();


    Lieu(string nom, string description, int difficulte, vector<string> accessibles);
};

#endif