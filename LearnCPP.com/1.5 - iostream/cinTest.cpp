#include <iostream>

int main()
{
    std::cout << "Enter two numbers separated by a space: ";

    int x{};            // define variable x to hold user input (and value-initialize it)
    int y{};            // define variable y to hold user input (and value-initialize it)
    std::cin >> x >> y; // get number from keyboard and store it in variable x

    std::cout << "You entered " << x << " and " << y << '\n';
    return 0;
}
