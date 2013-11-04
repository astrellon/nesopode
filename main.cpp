#include <iostream>
#include "nes.h"
#include "cpu_info.h"

int main(int argc, char **argv)
{
    nes::NES n;

    std::cout << "Woo\n";

    std::cout << "Size: " << sizeof(nes::Op) << "\n";
    

    return 0;
}
