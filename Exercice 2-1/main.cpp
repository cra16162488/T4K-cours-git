#include <iostream>
#include <string>
#include <vector>

char        oper, continueConfirm;
int         num1, num2;

int main(int argc, char *argv[], char *envp[])
{
    std::cout << "Exercice 2-1 - Calculette de console" << std::endl;

    do
    {
        std::cout << "Entrez le premier nombre : " << std::flush;
        std::cin >> num1;
        std::cout << "Entrez le premier nombre : " << std::flush;
        std::cin >> num1;
    } while (continueConfirm != 'y');

    std::cin >> userInput;

    return 0;
}
