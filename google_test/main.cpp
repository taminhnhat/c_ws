#include <iostream>
#include <rectangle.h>
#include <circle.h>

int main()
{
    std::cout << "Size of Int is " << sizeof(int) << std::endl;
    std::cout << "Size of Int* is " << sizeof(int *) << std::endl;

    int w, h, r;
    std::cout << "Enter rectangle width in metter: ";
    std::cin >> w;
    std::cout << "      rectangle height in metter: ";
    std::cin >> h;
    std::cout << ">>> Area of rectangle is " << retangle(w, h) << " m2" << std::endl;
    std::cout << "Enter circle radius in metter: ";
    std::cin >> r;
    std::cout << ">>> Area of circle is " << circle(r) << " m2" << std::endl;
    return 1;
}