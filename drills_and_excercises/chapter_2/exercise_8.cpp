// This program read a integer number and return if it is an odd or even number
#include<iostream>
int main()
{
    std::cout << "Enter an integer number to check if it is odd or even:" << std::endl;
    int x=0;
    std::cin >> x;
    if (x%2 == 0)
    {
        std::cout << "The value " << x << " is an even number!" << std::endl;
    }
    else
    {
        std::cout << "The value " << x << " is an odd number!" << std::endl;
    }
}