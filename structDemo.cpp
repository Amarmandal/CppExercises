#include <iostream>

struct DateStruct
{
    int year;
    int month;
    int day;
};

void print(DateStruct &date)
{
    std::cout << date.year << '/' << date.month << '/' << date.day << '\n';
}

int main()
{
    DateStruct today {2019, 03, 27};
    today.day = 16;
    print(today);
    return 0;
}