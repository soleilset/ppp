#include<iostream>
int main()
{
    int a = 5;
    std::cout << ++a << std::endl; // suma 1 al valor de a (5) y lo imprime y almacena en la variable a
    std::cout << a++ << std::endl; // imprime el valor de a (6), luego le suma 1 y lo almacena en la variable a
    std::cout << a << std::endl; // imprime a cuyo valor es 7
    return 0;
}