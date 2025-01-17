// Este programa imprime tu nombre x veces
#include<iostream>
int main()
{
    std::string name;
    std::cout << "Escriba su nombre completo y luego 'enter':" << std::endl;
    std::getline(std::cin, name); // Almacenamos el nombre completo del usuario
    int stop = 0; // Declaramos una variable stop para almacenar el numero de veces que se imprimira el nombre
    std::cout << "¿Cuantas veces quieres que se imprime tu nombre?" << std::endl;
    std::cin >> stop; // Almacenamos el numero de veces que se imprimira el nombre
    int x=0; // Inicializamos x en 0 para utilizarlo en el bucle while
    while (x<stop) // Mientras x sea menor que 10, se ejecutara el bucle
    {
        ++x; // Incremntamos x en 1 y lo guardamos de modo que el bucle se ejecuta 10 veces siendo x=10 el ultimo valor de x
        std::cout << "¡Hola, " << name << "!" << std::endl; // imprimimos el nombre del usuario en cada iteracion
    }
    std::cout << "Tu nombre ha sido imprimido " << x << " veces" << std::endl; // el bucle while se debe detener cuando x=10 
    return 0;
}