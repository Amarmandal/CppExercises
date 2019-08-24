#include <iostream>
using namespace std;

class Shape
{
    protected:
        int width;
        int height;

    public:
        virtual int getArea() = 0;//at least one virtual function for abstract class
        void setWidth(int w)
        {
            width = w;
        }

        void setHeight(int h)
        {
            height = h;
        }
};

class Rectangle: public Shape
{
     public:
        int getArea()
        {
            return (width * height); 
        }
};

class Triangle: public Shape
{
     public:
        int getArea()
        {
            return (width * height)/2; 
        }
};

int main()
{
    Rectangle rect;
    Triangle tri;

    rect.setWidth(5);
    rect.setHeight(7);

    cout << "Total Rectangle area:" << rect.getArea() << endl;

    tri.setWidth(5);
    tri.setHeight(7);

    cout << "Total Triangle area:" << tri.getArea() << endl;
    return 0;
}





