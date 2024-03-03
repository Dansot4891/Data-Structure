#include <iostream>     // Provides cout and cin
#include <cstdlib>      // Provides EXIT_SUCCESS & NULL
#include "bag6.h"
using namespace std;
using namespace main_savitch_10;

int main()
{
    bag<int> b1;

    b1.insert(6); b1.insert(3); b1.insert(2); b1.insert(8);
    b1.erase_one(3); b1.insert(1); b1.insert(7); b1.insert(9);

    b1.print_bag();

    return EXIT_SUCCESS;
}

