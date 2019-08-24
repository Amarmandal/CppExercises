#include <iostream>
using namespace std;
class set
{
    private:
        int m, n;
    public:
        void input(void);
        void display(void);
        int largest(void);
};

void set :: input(void)
{
    cout << "Enter the value of m and n" << '\n';
    cin >> m >> n;
}
{
    if (m>n)
    {
        cout << m << '\n';
    }
}

void set :: display(void)
{
    cout << "Largest Number is: " << largest() << '\n';
}

int main()
{
    class set num;
    num.input();
    num.largest();
    num.display();

}