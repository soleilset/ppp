// Imprimir el nmbre completo del usuario
#include<iostream>
int main()
{
    std:: string nombre_completo;
    std::cout << "Por favor, escriba su nombre completo seguido de 'enter': " << std::endl;
    std::getline(std::cin, nombre_completo); // me permite leer cadenas de caracteres con espacios
    std::cout << "Hola, " << nombre_completo << "!" << std::endl;
    return 0;
}