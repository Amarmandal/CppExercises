//Wap to overload prefix operator
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

        Complex(int r, int i)
        {
            real = r;
            img = i;
        }

        Complex operator++(int);
        void display();
};

Complex Complex::operator++(int) //prefix notation
{
    Complex temp;
    temp.real = real++;
    temp.img = img++;
    return temp;
}

void Complex::display()
{
    cout << "Real part is:" << real << endl;
    cout << "Imaginary part is:" << img << endl;
}

int main()
{
    Complex c1(4, 5);
    cout << "Value of complex number is:" << endl;
    c1.display();
    c1++; //same as c1.operator++();
    cout << "Value of complex number after prefix:" << endl;
    c1.display();
}