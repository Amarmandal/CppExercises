//wap to overload logical not (i.e !) operator
#include <iostream>
using namespace std;

class Coordinate
{
    private:
        int x, y;
    public:
        Coordinate()
        {
            x = 0;
            y = 0;
        }

        Coordinate(int a, int b)
        {
            x = a;
            y = b;
        }

        void readPoint();
        int operator!();
        void display();
};

void Coordinate::readPoint()
{
    cout << "Enter the x and y coordinate";
    cin >> x >> y;
}

int Coordinate::operator!()
{
    if(x==0 && y==0)
        return 1;
    else
        return 0;
}

void Coordinate::display()
{
    cout<< "The coordinate is:("<<x<<", "<<y<<")";
}

int main()
{
    Coordinate pt;
    pt.readPoint();
    if(!pt) //pt.operator!()
        cout << "The point is origin" << endl;
    else
        cout << "The point is not origin"<< endl;
    pt.display();
}
