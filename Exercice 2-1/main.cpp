#include <exception>
#include <iostream>
#include <string>
#include <vector>

char        oper, continueConfirm;
int         num1, num2;

int processMath()
{
    switch (oper)
    {
    case '+':
        return num1 + num2;
        break;
    case '-':
        return num1 - num2;
        break;
    case '*':
        return num1 * num2;
        break;
    case '/':
        if (!num2 == 0)
            return num1 / num2;
        break;
    default:
        throw std::runtime_error("Invalid operator");
        break;
    }
}

int main(int argc, char *argv[], char *envp[])
{
    std::cout << "Exercice 2-1 - Calculette de console" << std::endl;

    do
    {
        try {
            std::cout << "\nEntrez la formule : " << std::flush;
            std::cin >> num1 >> oper >> num2;
            std::cout << "\nResultat : " << processMath() << std::endl;

            std::cout << "Voulez-vous continuer (o/n)? " << std::endl;
            std::cin >> continueConfirm;
        }
        catch (std::exception e)
        {
            std::cout << "Donnee invalides, veuillez re-entrer les informations" << std::endl;
            continueConfirm = 'o';
        }
    } while (continueConfirm == 'o');

    return 0;
}
