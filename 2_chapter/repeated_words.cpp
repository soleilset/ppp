// este codigo mira las palabras repetidas de forma continua en un texto
#include<iostream>
int main()
{
    std::string previous, current;
    while (std::cin>>current) // lee cada palabra y la almacena una por una en la variable current
    {
        if (previous == current) // si la palabra actual es igual a la anterior
            std::cout << "repeated word: " << current << '\n'; // imprime la pañabre repetida
        previous = current; // almacena la palabra actual en la variable previous
    }
}