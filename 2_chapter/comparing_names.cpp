// Este codigo compara dos nombre y muestra si son iguales o cual esta primero en el diccionario
#include<iostream>
int main()
{
    std::cout << "Por favor, escriba dos nombres seguido de 'enter'" << std::endl;
    std::string first, second;
    std::cin >> first >> second;

    if (first == second)
        std::cout << "¡Son los mismos nombres!" << std::endl;
    if (first < second)
        std::cout << first << " esta antes en el diccionario que " << second << std::endl;
    if (first > second)
        std::cout << first << " esta despues en el diccionario que " << second << std::endl;
}