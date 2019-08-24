#include <iostream>

double getValueFromUser()
{
    std::cout << "Enter the number: ";
    double input{0};
    std::cin >> input;
    return input;
}

void add(double x, double y)
{
    std::cout << "Addition of two integer: " << x + y << '\n';
}

void sub(double x, double y)
{
    std::cout << "Subtraction of two integer: " << x - y << '\n';
}

void multiply(double x, double y)
{
    std::cout << "Multiplication of two integer: " << x * y << '\n';
}

double divide(double x, double y)
{
    return x / y;
}

int main()
{
    double a{getValueFromUser()};
    double b{getValueFromUser()};
    add(a, b);
    sub(a, b);
    multiply(a, b);
    std::cout << "Division: " << divide(a, b) << '\n';
    return 0;
}