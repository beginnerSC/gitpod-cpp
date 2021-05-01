#include <iostream>

int main() 
{
    // To compile in debug mode: g++ -g main.cpp

    std::cout << "Hello World!" << std::endl;

    for (size_t i=0 ; i<10 ; i++)
    {
        std::cout << i << std::endl;
    }

    return 0;
}