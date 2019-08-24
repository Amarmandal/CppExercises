#include <iostream>
#include <cassert>

class Fraction
{
private:
    int m_numerator;
    int m_denominator;

public:
    Fraction() //default constructor
    {
        m_numerator = 0;
        m_denominator = 1;
    }

    Fraction(int numerator, int denominator=1)
    {
        assert(denominator!=0);
        m_numerator = numerator;
        m_denominator = denominator;

    }

    int getNumerator() { return m_numerator; } //getter
    int getDenominator() { return m_denominator; } //getter
    double getValue() { return static_cast<double>(m_numerator)/(m_denominator); }
};

int main()
{
    Fraction frac;
    Fraction frac2{2}; // numerator, denominator
    Fraction six = Fraction(6); //copy intialize a fraction, will call Fraction(6, 1)
    Fraction seven = 7; //Copy initialize a Fraction, The compiler will find a way to convert 7 to a fracition,
    //which will invoke (7,1) constructor
    std::cout << frac.getNumerator() << "/" << frac.getDenominator() << '\n';
    std::cout << seven.getDenominator() << std::endl;
    return 0;
}

//Note: Donot copy initializes the constructor