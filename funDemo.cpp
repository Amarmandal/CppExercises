#include <iostream>

int getValueFromUser()
{
    std::cout << "Enter the number: ";
    int input{0};
    std::cin >> input;
    return input;
}

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int x(getValueFromUser());
    int y(getValueFromUser());
    std::cout << "Addition of two number: " << add(x, y) << '\n';
    return 0;
}