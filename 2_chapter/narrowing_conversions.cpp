#include<iostream>
int main()
{
    double d = 0;
    while (std::cin>>d) // repeat the statements below as long as we type in numbers
    { 
        int i = d; // try to squeeze a ﬂoating-point value into an integer value
        char c = i; // try to squeeze an integer into a char
        std::cout << "d==" << d // the original double
        << " i=="<< i // double converted to int
        << " c==" << c // int value of char
        << " char(" << c << ")\n"; // the char
    }
}