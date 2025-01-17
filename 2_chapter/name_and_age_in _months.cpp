// Este codigo imprime el nombre completo del usuario y su edad en meses
#include<iostream>
int main()
{
    double age = 0;
    std::string full_name;
    std::cout << "Escribe tu nombre completo seguido de 'enter':" << std::endl;
    std::getline(std::cin, full_name);
    std::cout << "Escribe tu edad en años (se permiten decimales) seguido de 'enter':" << std::endl;
    std::cin >> age;
    std::cout << "Hola, " << full_name << ".\nTu edad es de " << age*12 << " meses." << std::endl;
    return 0;
}