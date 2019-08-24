#include <iostream>
using namespace std;

class Something
{
public:
    static int s_value;
};
 
int Something::s_value = 1;
 
int main()
{
    Something::s_value = 5;
    cout << Something::s_value << endl;
}