#include <iostream>
#include <string>
#include "whatever.hpp"

int main(void)
{
    std::cout << "=== swap, min, max with int ===" << std::endl;
    int a = 2;
    int b = 3;
    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
    ::swap(a, b);
    std::cout << "After  swap: a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
    std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;

    std::cout << std::endl;
    std::cout << "=== swap, min, max with std::string ===" << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    std::cout << "Before swap: c = " << c << ", d = " << d << std::endl;
    ::swap(c, d);
    std::cout << "After  swap: c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
    std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;

    std::cout << std::endl;
    std::cout << "=== min/max with equal values (returns 2nd) ===" << std::endl;
    int x = 42;
    int y = 42;
    std::cout << "x = " << x << ", y = " << y << std::endl;
    std::cout << "min( x, y ) = " << ::min(x, y) << " (address is y: " << (&::min(x, y) == &y ? "yes" : "no") << ")" << std::endl;
    std::cout << "max( x, y ) = " << ::max(x, y) << " (address is y: " << (&::max(x, y) == &y ? "yes" : "no") << ")" << std::endl;

    return 0;
}
