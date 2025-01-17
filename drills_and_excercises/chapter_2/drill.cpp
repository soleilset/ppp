// This code asks some inputs to the user an then prints a letter with that information
#include <iostream>
int main()
{
    std::string first_name, message, friend_name, your_name; // declare variables for the letter
    std::cout << "Enter your name:" << std::endl; // ask user's name
    std::cin >> your_name;
    std::cout << "Enter the name of the person you want to write to:" << std::endl; // ask the name of the person to write to
    std::cin >> first_name;
    std::cout << "How old is?:\n"; // ask the age of the person to write to
    int age = 0;
    std::cin >> age;
    std::cout << "Write what you want to say to that person:" << std::endl; // ask a message to write to that person
    std::cin >> std::ws; // it ignores all the blank spaces before the message
    std::getline(std::cin, message);
    std::cout << "Enter the name of another friend:" << std::endl; // ask the name of another friend 
    std::cin >> friend_name;
// now we print the letter
    std::cout << "Dear " << first_name << "," << std::endl << std::endl; 
    std::cout << "    How are you? I miss you. " << message << ". I hear you just had a birthday and you are " 
    << age << " years old. ";
    if (age <=0 || age >= 110) 
    {
        std::cout << "You're kiddin me! ";
    }
    if (age < 12 && age >0)
    {
        std::cout << "Next year you will be " << age+1 << " years old. ";
    }
    if (age==17)
    {
        std::cout << "Next year you will be able to vote. ";
    }
    if (age > 70 && age < 110)
    {
        std::cout << "Are you retired? ";
    }
    std::cout <<"Have you seen "<< friend_name << " lately? Yours sincerely," << std::endl << std::endl;
    std::cout << "___________________" << std::endl;
    std::cout << your_name << std::endl;
    return 0;
}