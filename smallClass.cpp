//wap to read the two number and print sum
//wap to claculate the area and perimeter of rectangle
#include <iostream>
using namespace std;

class small
#include <iostream>
using namespace std;

class small
{
    private: 
        int x, y;
    public:
        void readdata();
        void output();
};

void small::readdata()
{
    cout << "Enter first number:";
    cin >> x;
    cout << "Enter second number:";
    cin >> y;
}

void small::output()
{
    if(x<y)
    {
        cout << "Smallest is: " << x << endl;
    }
    else
    {
        cout << "Smallest is: " << y << endl;   
    }
    
}

int main()
{
    small s;
    s.readdata();
    s.output();
}
