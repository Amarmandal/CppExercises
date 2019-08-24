#include <iostream>
#include <cassert>

class Fraction
{
private:
    int m_numerator;
    int m_denominator;

public:
    // Default constructor
    Fraction(int numerator=0, int denominator = 1) :
    m_numerator(numerator), m_denominator(denominator)
    {
        assert(denominator != 0);
    }

    //Copy constructor
    Fraction(const Fraction &fraction):
    m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator)
    {
        std::cout << "copy constructor worked\n";
    }

    double getValue(){ return static_cast<double>(m_numerator)/(m_denominator); }
};

int main()
{
   Fraction original(2, 3);
   Fraction copy = Fraction(original);
   std::cout << copy.getValue() << std::endl;
   return 0;
}