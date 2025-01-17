// Este codigo recibe como input el nombre de una persona e imprime "Hola, nombre!"
#include <iostream>
using namespace std;
int main()
{
    string first_name; // Declaramos una variable de tipo string para almacenar el nombre del usuario 
    cout << "Por favor, ingrese su primer nombre (seguido de 'enter')" << endl; // Output para pedir al usuario su nombre
    cin >> first_name; // Lee los caracteres ingresados por el usuario y los almacena en la variable first_name
    cout << "Hola," << first_name << "!" << endl; // Imprime el saludo con el nombre del usuario
    return 0;
}