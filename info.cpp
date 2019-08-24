#include <iostream>
using namespace std;

struct Student
{
    char name[50];
    int roll;
    double m[3];
};

int main()
{
    int i;
    struct Student ammu[5];
    for(i=0;i<5; i++)
    {
        cout << "Enter the name: ";
        cin >> ammu[i].name;
        cout << "Enter the roll no: ";
        cin >> ammu[i].roll;
        cout << "Enter the marks in three subject: ";
        for (i=0; i<3; i++)
        {
            cin >> ammu[i].m[i];
        }
        cout << "Displaying Entered Information:" << endl;
        cout << "Name is: " << ammu[i].name << endl;
        cout << "Roll is: " << ammu[i].roll << endl;
        for (i=0; i<3; i++)
        {
            if(i<2)
            {
                cout << ammu.m[i] << ", ";
            }
            else
            {
                cout << ammu.m[i] << '\n';
            }
            
        }
        return 0;
    }
}