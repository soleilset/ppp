// This program reads two floating-point numbers and print the smaller, largest, sum, diference, product, and ratio of them
#include<iostream>
#include<cmath>
int main()
{
    double val1 = 0, val2 = 0;
    std::cout << "Enter two floating-point numbers:" << std::endl;
    std::cin >> val1 >> val2;
    if (val1 < val2)
    {
        std::cout << "The smallest number is: " << val1 << std::endl;
        std::cout << "The largest number is: " << val2 << std::endl;
    }
    else if (val1 > val2)
    {
        std::cout << "The smallest number is: " << val2 << std::endl;
        std::cout << "The largest number is: " << val1 << std::endl;
    }
    else
    {
        std::cout << "The numbers are equal." << std::endl;
    }
    std::cout << "The sum is: " << val1 + val2 << std::endl
    << "The diference is: " << abs(val1 - val2) << std::endl
    << "The product is: " << val1 * val2 << std::endl
    << "The ratio is: " << val1/val2 << std::endl;
    return 0;
}