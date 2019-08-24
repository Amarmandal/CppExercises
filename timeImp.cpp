#include <iostream>
using namespace std;

class Time
{
    int h, m , s;
    public:
        Time():h(0), m(0), s(0){}

        Time(int a, int b, int c)
        {
            h = a;
            m = b;
            s = c;
        }

        friend Time operator+(Time &x, Time &y);

        void display()
        {
            cout << "Time-> " << h << "hr " << m << "min " << s << "sec" << endl;
        }
};

Time operator+(Time &x, Time &y)
{
    Time temp;
    temp.h = x.h + y.h;
    temp.m = x.m + y.m;
    temp.s = x.s + y.s;
    if(temp.s>=60)
    {
        temp.m = temp.m + temp.s/60;
        temp.s = temp.s % 60;
        if(temp.m>=60)
        {
            temp.h = temp.h + temp.m/60;
            temp.m = temp.m % 60;
        }
    }
    return temp;
}

int main()
{
    Time t1(4, 65, 100), t2(3, 10, 15), t3;
    t3 = t1 + t2;
    t3.display();

}