#include <iostream>
using namespace std;

class Something
{
private:
    static int s_value; //static member variable
public:
    static int getValue() { return s_value;} //static member function
};
 
int Something::s_value = 1;
 
int main()
{
    cout << Something::getValue() << endl;
}