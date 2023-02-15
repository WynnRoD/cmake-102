#include <iostream>
#include "letter.h"

int main (int, char**) {

    letter::ready();

    std::cout << "printing random letters \n";
    for (int i = 0; i < 26; i++)
    {
        letter letter{};

        std::cout << letter.symbol();

        if (i >= 26)
            std::cout << "\n";
        else
            std::cout << " ";
    }

    return 0;
}