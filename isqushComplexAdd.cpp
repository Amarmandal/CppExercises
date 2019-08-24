//wap to overload binary operator to add two complex number
#include <iostream>
using namespace std;

class Complex
{
    private:
        int real, img;
    public:
        Complex()
        {
            real = 0;
            img = 0;
        }

        Complex(int r, int i)
        {
            real = r;
            img = i;
        }

        Complex operator+(Complex &c)
        {
            Complex temp;
            temp.real = real + c.real;
            temp.img = img + c.img;
            return temp;
        }

        void display();
};

void Complex::display()
{
    cout << "The real part is:" << real << endl;
    cout << "The imaginary part is: " << img << endl;
}

int main()
{
    Complex c1(2, 4), c2(5, 6), c3;
    c3 = c1 + c2; //Same as c1.operator+(c2)
    c3.display();
}