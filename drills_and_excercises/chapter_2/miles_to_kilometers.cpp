// This program convert miles to kilometers
#include<iostream>
int main()
{
    double miles {0}, kilometers {0};
    std::cout << "How many miles is your home from your favorite restaurant?" << std::endl;
    std::cin >> miles;
    kilometers = miles * 1.609;
    std::cout << "Your home is " << kilometers << " kilometers away from you favorite restaurant." << std::endl;
    return 0;
}