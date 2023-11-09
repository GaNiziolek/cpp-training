#include <iostream>

int main() 
{

    int firstNumber{};
    int secondNumber{};

    std::cout << "Enter the first number: ";
    std::cin >> firstNumber;

    std::cout << "Enter the second number: ";
    std::cin >> secondNumber;


    std::cout << "\n" << firstNumber << " * " << secondNumber << " = " << firstNumber * secondNumber << "\n";

    return 0;
}