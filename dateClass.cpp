#include <iostream>
using namespace std;

class DateClass
{
    int m_month; //by default private
    int m_day; // by default private
    int m_year; //by default private

    public:
        void setDate(int month, int day, int year)
        {
            m_month = month;
            m_day = day;
            m_year = year;
        }

        void print()
        {
            cout << m_month << "/" << m_day << "/" << m_year << endl;
        }

        void copyFrom(const DateClass &d)
        //we can access the private member of d directly
        {
            m_month = d.m_month;
            m_day = d.m_day;
            m_year = d.m_year;
        }
};

int main()
{
    DateClass date;
    date.setDate(04, 24, 2019);//okay because setDate is public
    date.print();

    DateClass copy;
    copy.copyFrom(date);//okay because copyFrom is public
    copy.print();

    return 0;
}