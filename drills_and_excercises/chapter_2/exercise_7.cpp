// this program read 3 words from the user and print them in order
#include<iostream>
int main()
{
    std::string word1 = "", word2 = "", word3 = "";
    std::cout << "Enter three words:" << std::endl;
    std::cin >> word1 >> word2 >> word3;
    if (word1 <= word2 && word1 <= word3)
    {
        std::cout << word1 << ", ";
        if (word2 <= word3)
        {
            std::cout << word2 << ", " << word3 << std::endl;
        }
        else
        {
            std::cout << word3 << ", " << word2 << std::endl;
        }
    }
    else if (word2 <= word1 && word2 <= word3)
    {
        std::cout << word2 << ", ";
        if (word1 <= word3)
        {
            std::cout << word1 << ", " << word3 << std::endl;
        }
        else
        {
            std::cout << word3 << ", " << word1 << std::endl;
        }
    }
    else 
    {
        std::cout << word3 << ", ";
        if (word1 <= word2)
        {
            std::cout << word1 << ", " << word2 << std::endl;
        }
        else
        {
            std::cout << word2 << ", " << word1 << std::endl;
        }
    }
}