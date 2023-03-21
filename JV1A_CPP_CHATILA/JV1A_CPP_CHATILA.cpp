// JV1A_CPP_CHATILA.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "Lieu.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void exercice1() {
    int numeroChoisi;

    std::cout << "Pour aller a destination 1, taper 1. Pour aller a destination 2, taper 2.";

    std::cin >> numeroChoisi;

    if (numeroChoisi == 1) {
        std::cout << "Vous etes a la destination" << numeroChoisi;
    }
    else if (numeroChoisi == 2) {
        std::cout << "Vous etes a la destination" << numeroChoisi;
    }
    else {
        std::cout << "Vous vous etes trompe de destination.";
    }
}

void exercice2() {
    string destinationChoisi;

    std::cout << "Pour aller a la ville, taper ville. Pour aller a la foret, taper foret.";

    std::cin >> destinationChoisi;

    if (destinationChoisi == "ville") {
        std::cout << "Vous etes a la " << destinationChoisi;
    }
    else if (destinationChoisi == "foret") {
        std::cout << "Vous etes a la " << destinationChoisi;
    }
    else {
        std::cout << "Vous vous etes perdus, non ?";
    }
}   

void deplacement(Lieu* lieu1, Lieu* lieu2, Lieu* lieu3) {
    string destinationChoisi;
    string destinationActuelle;
    bool voyage = true;

    while(voyage == true){
        std::cout << "Pour aller a la ville, taper ville. Pour aller a la foret, taper foret. Pour aller a la montagne, taper montagne" << std::endl;

        std::cin >> destinationChoisi;

        if (destinationChoisi == "ville" && destinationActuelle != "ville") {
            destinationActuelle = destinationChoisi;
            std::cout << "Vous etes a la " << destinationChoisi << endl;
            lieu1->showDescription();
        }
        else if (destinationChoisi == "ville" && destinationActuelle == "ville") {
            std::cout << "Vous etes deja sur place." << endl;
        }

        else if (destinationChoisi == "foret" && destinationActuelle != "foret") {
            destinationActuelle = destinationChoisi;
            std::cout << "Vous etes a la " << destinationChoisi << endl;
            lieu2->showDescription();
        }
        else if (destinationChoisi == "foret" && destinationActuelle == "foret") {
            std::cout << "Vous etes deja sur place." << endl;
        }


        else if (destinationChoisi == "montagne" && destinationActuelle != "montagne") {
            destinationActuelle = destinationChoisi;
            std::cout << "Vous etes a la " << destinationChoisi <<endl;
            lieu3->showDescription();
        }
        else if (destinationChoisi == "montagne" && destinationActuelle == "montagne") {
            std::cout << "Vous etes deja sur place."<<endl;
        }

        else {
            std::cout << "Vous etes perdu, non?";
        }
    }
}

void exercice3() {
    Lieu* lieu1 = new Lieu("ville", "grise", 3, { "foret", "montagne" });
    Lieu* lieu2 = new Lieu("foret", "verte", 5, { "ville", "montagne" });
    Lieu* lieu3 = new Lieu("montagne", "blanche", 7, { "ville", "foret" });

    deplacement(lieu1, lieu2, lieu3);
}

int main()
{
    std::vector<int> lieux;

    //tentative non fonctionnelle

    Lieu* lieux[1] = new Lieu("ville", "grise", 3, { "foret", "montagne" });
    Lieu* lieux[2] = new Lieu("foret", "verte", 5, { "ville", "montagne" });
    Lieu* lieux[3] = new Lieu("montagne", "blanche", 7, { "ville", "foret" });
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
