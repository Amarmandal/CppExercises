#include <iostream>
using namespace std;
void f(int x=0, int y=100);

int main()
{
    f(1, 2);
    f(10);
    f();
    return 0;
}

void f(int x, int y)
{
    cout << "x: " << x << " y: " << y << '\n';
}