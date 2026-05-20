#include <iostream>
#include <string>
#include "iter.hpp"

template <typename T>
void print(T const &x)
{
    std::cout << "  " << x << std::endl;
}

template <typename T>
void increment(T &x)
{
    x++;
}

template <typename T>
void doubleVal(T &x)
{
    x *= 2;
}

int main(void)
{
    // iter su array non-const: la funzione puo' modificare gli elementi
    std::cout << "=== iter on int array (non-const) ===" << std::endl;
    int arr[] = {1, 2, 3, 4, 5};
    std::cout << "Initial values:" << std::endl;
    ::iter(arr, 5, print<int>);
    std::cout << "After increment<int> applied to each element:" << std::endl;
    ::iter(arr, 5, increment<int>);
    ::iter(arr, 5, print<int>);

    // iter su array const: la funzione deve accettare const ref
    std::cout << std::endl;
    std::cout << "=== iter on const int array ===" << std::endl;
    const int carr[] = {10, 20, 30};
    std::cout << "Values (read-only):" << std::endl;
    ::iter(carr, 3, print<int>);

    // terzo parametro e' un function template istanziato
    std::cout << std::endl;
    std::cout << "=== iter on double array, 3rd param: instantiated function template ===" << std::endl;
    double darr[] = {1.5, 2.5, 3.5};
    std::cout << "Before doubleVal:" << std::endl;
    ::iter(darr, 3, print<double>);
    ::iter(darr, 3, doubleVal<double>);
    std::cout << "After doubleVal:" << std::endl;
    ::iter(darr, 3, print<double>);

    // iter funziona con qualsiasi tipo
    std::cout << std::endl;
    std::cout << "=== iter on std::string array ===" << std::endl;
    std::string sarr[] = {"hello", "world", "42"};
    ::iter(sarr, 3, print<std::string>);

    return 0;
}
