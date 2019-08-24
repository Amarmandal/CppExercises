//Distance between two points
#include <iostream>
#include <cmath>
using namespace std;
class Point
{
    float x, y;
    public:
    void setData(int a, int b){
        x = a;
        y = b;
    }

    float getDistance(Point c){
        float distance;
        distance = pow(x-c.x, 2) + pow(y-c.y, 2);
        return sqrt(distance);
    }

};

int main()
{
    Point a, b;
    float d;
    a.setData(0, 0);
    b.setData(3, 4);
    d = a.getDistance(b);
    cout << "Distance is: " << d << endl;
}