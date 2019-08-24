// May 29, 2019
#include <iostream>
using namespace std;

class Array
{
    private:
    int a[10];
    public:
    void insert(int index,int val)
        {
        a[index]=val;
        }
};

class Stack:protected Array
{
    int top = 0;
    /*
    protected:
    void insert(int index,int val)
        {
        a[index]=val;
        }                          
    */
    public:
    /*
    void insert(int index,int val)
        {
        a[index]=val;
        }                          
    */
        void push(int value)
        {
            insert(top, value);
            cout << "Vaue of: a[" << top <<"]="<< value  << endl;
            top++;
            cout << "Value of top: " << top << endl;
        }

        void setTop()
        {
            top = 0;
        }
};

int main()
{
    Stack s1;
    //s1.setTop();
    s1.push(8);
    s1.push(10);
    s1.push(12);
    s1.push(13);
    s1.push(14);
}