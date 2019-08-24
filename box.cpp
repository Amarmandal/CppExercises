#include <iostream>
using namespace std;

class Box
{
    private:
    int l, b, h;
    public:
    void getData(int x, int y, int z)
    {
        l = x;
        b = y;
        h = z;
    }

    void display()
    {
        cout << "Dimension of the box is" << l << "X" << b << "X" << h;
    }
};

int main()
{
    Box smallBox, bigBox;
    Box *p;
    p = &smallBox; //Allocates address of object to pointer
    p->getData(2, 5, 6); //Same as smallBox.getdData(2, 5, 6)
    p->display(); //smallBox.display();

    p = &bigBox;
    p->getData(20, 50, 60);
    p->display();

}