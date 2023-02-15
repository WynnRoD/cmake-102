#include "letter.h"
#include <cstdlib>
#include <ctime>

void letter::ready()
{
    srand(static_cast<unsigned int>(time(NULL)));
}

letter::~letter()
{}

letter::letter() {
    // number = (rand() % (upper - lower + 1)) + lower
    value = 'A' + (rand() % (25 + 1));
}

char letter::symbol() const
{
    return value;
}

