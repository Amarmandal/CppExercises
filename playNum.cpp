#include <iostream>

int main()
{
    std::cout << "Enter any number:";
    int num{0};
    std::cin >> num;
    std::cout << "Doubled of " << num << " is:" << num * 2 << '\n';
    std::cout << "Triple of " << num << " is:" << num * 3 << '\n';
    return 0;
}