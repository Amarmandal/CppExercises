#include <iostream>
using namespace std;

void readData(int a[10], int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        cin >> a[i];
    }
}

int main()
{
    int size=10, array[size], largest, i;
    cout << "Enter the ten positive number" << endl;
    readData(array, size);
    largest = array[0];
    for(i=1; i<size;i++)
    {
        if(largest < array[i])
        {
            largest = array[i];
        }
    }
    cout << "The largest of all is: " << largest << endl;
    return 0;
}


