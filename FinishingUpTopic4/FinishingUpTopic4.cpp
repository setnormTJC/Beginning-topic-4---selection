// FinishingUpTopic4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cassert>
#include <iostream>


int main()
{
    //std::cout << "Hello World!\n";

    //int a = 123; 
    //int b = 12334; 

    //if (a | b) //do not use single pipe here (that is "bitwise OR")
    //{

    //}

    while (true)
    {
        int numerator = 23; 

        std::cout << "Enter a denominator\n";

        int denominator; 
        std::cin >> denominator; 

        assert(denominator != 0);

        //try throw catch //these are related to "exception handling" -> we'll talk later about them

        std::cout << "The resulting fraction is: " << numerator / denominator << "\n";

    }
}

