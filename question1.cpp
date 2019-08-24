#include <iostream>
using namespace std;
void getValue(double &x,double &y,double  a,double b,double m,double c,double d,double n);

int main()
{
    double x{0}, y{0}, a, b, m, c, d, n;
    cout << "Enter the value of a, b, m" << endl; //ax+by=m
    cin >> a >> b >> m;

    cout << "Enter the value of c, d, n" << endl; //cx+dy=n
    cin >> c >> d >> n;
    getValue(x, y, a, b, m, c, d, n);
    cout << "x= " << x << " y= " << y << endl;
    return 0;
}

void getValue(double &x,double &y,double  a,double b,double m,double c,double d,double n)
{
    x = (m*d - b*n)/(a*d - c*b);
    y = (n*a - m*c)/(a*d - c*b);
}
