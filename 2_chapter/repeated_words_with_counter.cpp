#include<iostream>
int main()
{
    int words = 0;
    std::string previous, current;
    while (std::cin >> current)
    {
        ++words;
        if (previous == current)
            std::cout << "Palabra repetida: " << current << "\nUbicada en la palabra numero: " << words << std::endl;
        previous = current;
    }
}