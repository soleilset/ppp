// this program read 3 values from the user and print them in order
#include<iostream>
int main()
{
    int val1 = 0, val2 = 0, val3 = 0;
    std::cout << "Enter three integer numbers:" << std::endl;
    std::cin >> val1 >> val2 >> val3;
    if (val1 <= val2 && val1 <= val3)
    {
        std::cout << val1 << ", ";
        if (val2 <= val3)
        {
            std::cout << val2 << ", " << val3 << std::endl;
        }
        else
        {
            std::cout << val3 << ", " << val2 << std::endl;
        }
    }
    else if (val2 <= val1 && val2 <= val3)
    {
        std::cout << val2 << ", ";
        if (val1 <= val3)
        {
            std::cout << val1 << ", " << val3 << std::endl;
        }
        else
        {
            std::cout << val3 << ", " << val1 << std::endl;
        }
    }
    else 
    {
        std::cout << val3 << ", ";
        if (val1 <= val2)
        {
            std::cout << val1 << ", " << val2 << std::endl;
        }
        else
        {
            std::cout << val2 << ", " << val1 << std::endl;
        }
    }
}