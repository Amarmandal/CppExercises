#include <iostream>

#define PRINT_JOE

int main()
{
#ifdef PRINT_JOE //if PRINT_JOE is defined
    std::cout << "Joe\n"; //execute this code
#endif

#ifndef AMAR_M
    std::cout << "Amar M\n";
#endif

    return 0;

}