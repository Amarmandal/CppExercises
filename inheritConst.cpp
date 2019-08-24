#include <iostream>
using namespace std;

class A
{
    public:
        A()
        {
            cout << "Default constructor A is executed" << "\n";
        }

        A(int)
        {
            cout << "Parameterized Constructor A is executed" << "\n";
        }
};

class B:public A
{
    public:
        B():A()
        {
            cout << "B is created" << "\n";
        }

        B():A(5)
        {
            cout << "Parameterized B is created" << "\n";
        }
};

int main()
{
    B obj;
}