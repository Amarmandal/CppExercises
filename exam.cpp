#include <iostream>
using namespace std;

class Complex
{
    private:
    int x, y;
    public:
    Complex(int a=0, int b=0):x(a), y(b){}

    Complex operator+(Complex &c)
    {
        Complex temp;
        temp.x = x + c.x;
        temp.y = y + c.y;
        return temp;
    }

    void display()
    {
        cout << "Real part is: " << x << "\nImaginary part is: " << y << endl;
    }

};

int main()
{
    Complex c1(4, 5), c2, c3;
    c3 = c1 + c2; // c1.operator+(c2)
    c3.display();
}
