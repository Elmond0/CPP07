#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Array.hpp>

#define MAX_VAL 750

int main(int, char**)
{
    // --- test originale dal subject ---
    std::cout << "=== subject test: " << MAX_VAL << " random ints, copy, out-of-bounds ===" << std::endl;
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "ERROR: didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    std::cout << "All " << MAX_VAL << " values match after copy scope: OK" << std::endl;
    try { numbers[-2] = 0; }
    catch(const std::exception& e) { std::cerr << "numbers[-2]   => exception: " << e.what() << std::endl; }
    try { numbers[MAX_VAL] = 0; }
    catch(const std::exception& e) { std::cerr << "numbers[750]  => exception: " << e.what() << std::endl; }
    for (int i = 0; i < MAX_VAL; i++)
        numbers[i] = rand();
    delete [] mirror;

    // --- costruttore di default: array vuoto ---
    std::cout << std::endl;
    std::cout << "=== default constructor: empty array ===" << std::endl;
    Array<int> empty;
    std::cout << "empty.size() = " << empty.size() << " (expected 0)" << std::endl;
    try { empty[0] = 1; }
    catch (const std::exception& e) { std::cerr << "empty[0]      => exception: " << e.what() << std::endl; }

    // --- costruttore con n: elementi inizializzati a zero di default ---
    std::cout << std::endl;
    std::cout << "=== constructor(n): elements default-initialized to 0 ===" << std::endl;
    Array<int> zeroed(5);
    std::cout << "zeroed.size() = " << zeroed.size() << std::endl;
    for (unsigned int i = 0; i < zeroed.size(); i++)
        std::cout << "  zeroed[" << i << "] = " << zeroed[i] << std::endl;

    // --- copy constructor: deep copy, modificare la copia non tocca l'originale ---
    std::cout << std::endl;
    std::cout << "=== copy constructor: deep copy independence ===" << std::endl;
    Array<int> orig(3);
    orig[0] = 10; orig[1] = 20; orig[2] = 30;
    Array<int> copied(orig);
    copied[0] = 99;
    std::cout << "orig[0]   = " << orig[0]   << " (must be 10)" << std::endl;
    std::cout << "copied[0] = " << copied[0] << " (must be 99)" << std::endl;

    // --- operator=: deep copy, stessa garanzia ---
    std::cout << std::endl;
    std::cout << "=== operator=: deep copy independence ===" << std::endl;
    Array<int> assigned;
    assigned = orig;
    assigned[1] = 88;
    std::cout << "orig[1]     = " << orig[1]     << " (must be 20)" << std::endl;
    std::cout << "assigned[1] = " << assigned[1] << " (must be 88)" << std::endl;

    // --- operator[] const: leggibile su array const ---
    std::cout << std::endl;
    std::cout << "=== operator[] and size() on const Array ===" << std::endl;
    const Array<int> constArr(orig);
    std::cout << "constArr.size() = " << constArr.size() << std::endl;
    for (unsigned int i = 0; i < constArr.size(); i++)
        std::cout << "  constArr[" << i << "] = " << constArr[i] << std::endl;
    try { (void)constArr[10]; }
    catch (const std::exception& e) { std::cerr << "constArr[10]  => exception: " << e.what() << std::endl; }

    // --- funziona con tipi diversi da int ---
    std::cout << std::endl;
    std::cout << "=== Array<double> ===" << std::endl;
    Array<double> dbl(3);
    dbl[0] = 1.1; dbl[1] = 2.2; dbl[2] = 3.3;
    for (unsigned int i = 0; i < dbl.size(); i++)
        std::cout << "  dbl[" << i << "] = " << dbl[i] << std::endl;

    std::cout << std::endl;
    std::cout << "=== Array<std::string> ===" << std::endl;
    Array<std::string> words(3);
    words[0] = "hello"; words[1] = "world"; words[2] = "42";
    for (unsigned int i = 0; i < words.size(); i++)
        std::cout << "  words[" << i << "] = " << words[i] << std::endl;

    return 0;
}
