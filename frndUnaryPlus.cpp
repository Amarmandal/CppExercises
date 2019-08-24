#include <iostream>
using namespace std;

class Complex
{
    int real, img;
    public:
        Complex()
        {
            real = 0;
            img = 0;
        }

        Complex(int x, int y)
        {
            real = x;
            img = y;
        }

        friend Complex operator+(Complex &c1, Complex &c2);
        void display();
        

};

Complex operator+(Complex &c1, Complex &c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}

void Complex::display()
{
    cout << "Real part is: " << real << endl;
    cout << "Imaginary part Is: " << img << endl;
}

int main()
{
    Complex c1(2, 3), c2(4, 5), c3;
    c3 = c1 + c2; // c3 = operator+(c1, c2)
    c3.display();
}

