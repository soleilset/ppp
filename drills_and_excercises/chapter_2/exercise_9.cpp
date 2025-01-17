#include<iostream>
int main()
{
    std::cout << "Enter a number in words:" << std::endl;
    std::string word="";
    std::cin >> word;
    if (word == "zero")
    {
        std::cout << "Your number in digits is: " << "0" << std::endl;
    }
    else if (word == "one")
    {
        std::cout << "Your number in digits is: " << "1" << std::endl;
    }
    else if (word == "two")
    {
        std::cout << "Your number in digits is: " << "2" << std::endl;
    }
    else if (word == "three")
    {
        std::cout << "Your number in digits is: " << "3" << std::endl;
    }
    else if (word == "four")
    {
        std::cout << "Your number in digits is: " << "4" << std::endl;
    }
    else
    {
        std::cout << "Not a number I know" << std::endl;
    }
}