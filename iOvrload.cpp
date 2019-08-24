#include <iostream>
using namespace std;
class Distance
{
    private:
        int feet, inch;
    public:
        Distance():feet(0), inch(0){}
        friend void operator>>(istream &in, Distance &dis);
        friend void operator<<(ostream &out, Distance);
};

void operator>>(istream &in, Distance &dis)
{
    cout << endl << "Enter the data memeber of the object:";
    cout << endl <<  "feet= ";
    in >> dis.feet;
    cout << "inch=";
    in>>dis.inch;
}

void operator<<(ostream &out, Distance dis)
{
    out << endl<<"The data members of the object: ";
    out << dis.feet << "\'";
    out << dis.inch << "\"";
}

int main()
{
    Distance d;
    cin >> d; //same as operator >>(cin, d)
    cout << d; //same as operator << (cout, d)
    cout << endl;
}