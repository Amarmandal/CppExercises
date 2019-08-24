#include <iostream>
using namespace std;

class Polygon
{
    protected:
        int l, b, h;
    public:
        void setData() 
        {

            cout << "Enter the value of lenght breadth and height" << endl;
            cin >> l >> b>> h;
        }
        virtual float area()=0;
};

class Rectangle : public Polygon
{
    public:
        float area()
        {   
            setData();
            return l * b;
        }
};

class Triangle: public Polygon
{
    public:
        float area()
        {
            setData();
            return (h * b)/2;
        }
};

int main()
{
    int area;
    Polygon *pt;
    Rectangle r;
    pt = &r;
    area = pt->area();
    cout << "Area of rectangle is:" << area << endl;
}