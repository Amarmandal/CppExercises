//Wap to overload unary operator to return an object
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

        Complex operator-(); // function_name();
        void display();
        
};

Complex Complex::operator-()
 {
    Complex temp;
    temp.real = -real;
    temp.img = -img;
    return temp;
}

void Complex::display()
{
    cout << "Real part is:" << real << endl;
    cout << "Imginary part is:" << img << endl;
}

int main()
{
    Complex c1(2, 3), c2;
    c2 = -c1; // same as calling c1.operator-()
    cout << "Value of complex number is:" << endl;
    c2.display();
    c1.display();
}