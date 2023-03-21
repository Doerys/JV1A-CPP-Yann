#ifndef LIEU_CPP
#define LIEU_CPP

#include "Lieu.h"
#include <iostream>
#include <string>
using namespace std;

Lieu::Lieu(string nom, string description, int difficulte, vector<string> accessibles) : nomLieu(nom), descriptionLieu(description), difficulteLieu(difficulte), lieuxAccessibles{ accessibles }{

};

void Lieu::showDescription() {
	std::cout << "La " << nomLieu << " est " << descriptionLieu <<endl;
};









#endif

