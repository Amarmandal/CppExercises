/* Program written and tested by Amar Kumar Mandal */
#include <iostream>
using namespace std;

class Complex
{
    private:
    int x, y;
    public:
    Complex()
    {
        x = 0;
        y = 0;
    }
    Complex(int a, int b)
    {
        x = a;
        y = b;
    }

    void operator-()//Unary minus
    {
        x = -x;
        y = -y;
    }

    void operator+=(int a)//shorthand operator
    {
        x += a;
        y += a;
    }

    void operator==(Complex c)//Equals operator
    {
        if(x == c.x && y == c.y)
        {
            cout << "True\n";
        }
        else
        {
            cout << "False\n";
        }
        
        
    }

    void operator!=(Complex c)//Equals operator
    {
        if(x != c.x && y != c.y)
        {
            cout << "True\n";
        }
        else
        {
            cout << "False\n";
        }
        
        
    }

    void operator>(Complex c)//Greater than
    {
        if(x > c.x && y > c.y)
        {
            cout << "True\n";
        }
        else
        {
            cout << "False\n";
        }
        
        
    }

    friend Complex operator*(Complex &c1, Complex &c2);//Scalar multiplication
    friend Complex operator+(Complex &c1, Complex &c2);//Binary plus
    friend Complex operator-(Complex &c1, Complex &c2);//Binary Minus
    friend Complex operator++(Complex &c);//preincrement
    friend Complex operator++(Complex &c, int);//postincrement

    void display()
    {
        cout << "Real part is: " << x << "\nImaginary part is: " << y << endl;
    }

};

Complex operator++(Complex &c)//preincrement
{
    return Complex(++c.x, ++c.y);
}

Complex operator++(Complex &c, int)//postincrement
{
    return Complex(c.x++, c.y++);
}

Complex operator*(Complex &c1, Complex &c2)//Scalar multiplication definition
{
    return Complex(c1.x * c2.x, c1.y * c2.y);
}

Complex operator+(Complex &c1, Complex &c2)//Binary plus definition
{
    return Complex(c1.x + c2.x, c1.y + c2.y);
}

Complex operator-(Complex &c1, Complex &c2)//Binary plus definition
{
    return Complex(c1.x - c2.x, c1.y - c2.y);
}

int main()
{
    Complex c1(8, 6), c2(5, 9);
    Complex c3 = ++c1;
    c3.display();
}
