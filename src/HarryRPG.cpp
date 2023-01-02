// HarryRPG.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "headers/player.h"
#include "headers/Gryffindor.h"
#include "headers/Slytherin.h"


std::string firstname;
std::string lastname;

int makeChoice(std::string choices[], int N) {
    int choice;
    for (int i = 0; i < N; i++) {
        std::cout << i+1 << ": " + choices[i] << std::endl;
        
    }
    
    std::cin >> choice;
    return choice;
    
}

void intro() {
    
    std::cout << "Welcome to a Harry Potter RPG Console Game !\n";
    std::cout << "Please enter your character's first name : ";
    std::cin >> firstname;
    std::cout << "Last name : ";
    std::cin >> lastname;

    std::cout << "Welcome " + firstname + " " + lastname + " ! You are now an official Hogwarts student ! \n";

    // Creation of our player
    Player* player = new Player(firstname, lastname);

    // Creation of our enemy to fight
    Player* enemy = new Slytherin("Drago", "Malfoy");

    std::cout << "Tell me, " + player->firstname +", in what house would you rather be for your scolarship ?\n";

    std::string houses[4] = { "Gryffindor", "Slytherin", "Hufflepuff", "Ravenclaw" };

    int houseIndex = makeChoice(houses, 4);

    switch (houseIndex) {
        case 1:
            player = new Gryffindor(player->firstname, player->lastname);
            break;
        case 2:
            player = new Slytherin(player->firstname, player->lastname);
            break;
    };
    

}

void loopGame() {
    std::string actions[] = { "TODO", "CALLS ON DIFFERENT ACTIONS" };
    makeChoice(actions, 2);
}

int main()
{
    intro();
    

    while (1) {
        loopGame;

    }
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
