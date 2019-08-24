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

        void operator+=(int x)
        {
            real += x;
            img += x;
        }

        void display()
        {
            cout<< "Real Number: " << real << "\n"
                << "Imaginary Number: " << img <<"\n";
        }
};

int main()
{
    Complex c1(2, 3);
    c1 += 4; //c1.operator+=(4);
    c1.display();
}