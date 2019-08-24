#include <iostream>
#include <string>

class Employee
{
    public:
        std:: string m_name;
        int m_id;
        double m_wage;

        void print()
        {
            std::cout << "Name: " << m_name <<
                        " Id: " << m_id <<
                        " Wages: $" << m_wage << '\n';
        }
};

int main()
{
    Employee e1 {"alex", 23, 2300};
    Employee e2 {"bob", 12, 4500};
    e1.print();
    e2.print();
}