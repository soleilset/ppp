// Este codigo imprime "Hola, first_name (edad age)!"
#include <iostream>
using namespace std;
int main()
{
    string first_name = "???"; // Definimos first_name con un valor "???" para indicar que no conacemos el nombre
    int age = 0; // Definimos age con un valor 0 para indicar que no conocemos la edad
    cout << "Por favor, ingrese su primer nombre y edad seguido de 'enter'" << endl;
    cin >> first_name >> age; // Redefinimos el valor de first_name y age con los valores ingresados por el usuario
    cout << "Hola, " << first_name << " (edad " << age << ")!" << endl; // imprimos el saludo
    return 0;
}