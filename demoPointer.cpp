#include <iostream>

void computeSquare(int& area, int& perimeter, int l);

int main()
{
    int l, a, p;
    std::cout << "Enter the length ";
    std::cin >> l;
    computeSquare(a, p, l);

}

void computeSquare(int& area, int& perimeter, int l)
{
    area = l * l;
    perimeter = 4 * l;
    std::cout << "Area = " << area << " , perimeter = " << perimeter << std::endl;
}
