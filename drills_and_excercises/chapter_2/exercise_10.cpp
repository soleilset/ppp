// This program reads a character operator an two operands and prints the result of the operation
#include<iostream>
int main()
{
    char op = ' ';
    double val1 = 0, val2 = 0;
    std::cout << "Enter an operator and two operands:" << std::endl;
    std::cin >> op >> val1 >> val2;
    if (op == '+')
    {
        std::cout << "The sum of " << val1 << " and " << val2 << " is: " << val1 + val2 << std::endl;
    }
    else if (op == '-')
    {
        std::cout << "The difference of " << val1 << " and " << val2 << " is: " << val1 - val2 << std::endl;
    }
    else if (op == '*')
    {
        std::cout << "The product of " << val1 << " and " << val2 << " is: " << val1 * val2 << std::endl;
    }
    else if (op == '/')
    {
        std::cout << "The division of " << val1 << " and " << val2 << " is: " << val1 / val2 << std::endl;
    }
    else
    {
        std::cout << "Not an operator I know" << std::endl;
    }
}