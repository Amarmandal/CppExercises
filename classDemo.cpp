#include <iostream>
using namespace std;

class Cents
{
    private:
    int m_cents;

    public:
    Cents(int cents) { m_cents = cents; }

    friend Cents operator+(Cents &c1, Cents &c2);

    int getCents()
    {
        return m_cents;
    }
};

Cents operator+(Cents &c1, Cents &c2)
{
    return Cents(c1.m_cents + c2.m_cents);
}

int main()
{
    Cents cents1(6);
    Cents cents2(7);
    Cents centsSum = cents1 + cents2;
    cout << "I have " << centsSum.getCents() << " cents " << endl;
    return 0;
}
