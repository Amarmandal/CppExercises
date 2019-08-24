#include <iostream>
using namespace std;

template <class X>
X sum(X a, X b)
{
    return a + b;
}

int main()
{
    int a, b, isum;
    float c, d, fsum;
    cout << "Enter the integer value to add:";
    cin >> a >> b;
    isum = sum(a, b);
    cout << "Enter the float value to add:";
    cin >> c >> d;
    fsum = sum(c, d);
    cout << "Required sum is: " << isum << endl;
    cout << "Required float sum is: " << fsum << endl;
    return 0;
}
