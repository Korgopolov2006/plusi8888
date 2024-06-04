#include <iostream>
#include "..\libraryC++\Header.h"
#include "Windows.h"

int main()
{
    std::cout << Sum(35, 2);
    HINSTANCE load = LoadLibrary(L"DinamicLibrary.dll");
    typedef int (*sum) (int, int);
    sum Sum;
    Sum = (sum)GetProcAddress(load, "Sum");
    std::cout << Sum(2, 5);
    FreeLibrary(load);
}
