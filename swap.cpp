#include <iostream>
using namespace std;
void swap(float& x, float& y);

int main()
{
    float a = 22.2, b = 44.4;
    cout  << "a = " << a << ", b=" << b << '\n';
    swap(a, b);
    cout << "a = " << a << ",b = " << b << '\n';
    return 0;
}

void swap(float& x, float& y)
{
    float temp = x;
    x=10;
    y=4;
    x = y;
   y = temp;
}