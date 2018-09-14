#include <iostream>
#include <string>

std::string gameName, teamName, teamNumber;

int main()
{
    std::cout << "Bonjour Dozer, dit moi quel est le nom du jeu FRC de cette annee." << std::endl;
    std::cin >> gameName;
    std::cout << "Le nom du jeu est: " << gameName << std::endl;

    std::cout << "Entrer votre numero d equipe suivi de votre nom d equipe FRC" << std::endl;
    std::cin >> teamName;
    std::cin >> teamNumber;
    std::cout << "Votre equipe est : " << teamName << " (" << teamNumber << ")" << std::endl;

    return 0;
}
