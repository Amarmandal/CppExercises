#include <iostream>
using namespace std;

class Rectangle
{
    int length, breadth;
    public:
    void setSize(int x, int y)
    {
        length = x;
        breadth = y;
    }

    int getArea()
    {
        int a;
        a = length * breadth;
        return a;
    }

    int getPerimeter()
    {
        int p;
        p = 2*(length+breadth);
        return p;
    }
};

int main()
{
    Rectangle r1;
    int x, y;
    cout << "Enter length and breadth" << endl;
    cin >> x >> y;
    r1.setSize(x, y);
    cout << "Area is:" << r1.getArea() << endl;
    cout << "Perimeter is: " << r1.getPerimeter() << endl;
}