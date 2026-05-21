#include "mathlib/mathlib.h"
#include <iostream>

int main() {
    std::cout << "add(2,3)=" << mathlib::add(2, 3) << "\n";
    std::cout << "greet=" << mathlib::greet("alpha") << "\n";
    return 0;
}
