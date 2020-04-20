
// no include file

#include "initialize/main.hpp"

#include <iostream>

namespace topx	= sam::tacpg;

extern "C" int main(int argCount, char* argValues[])
{
    std::cout << "Starting Tactical Action Command Prompt Game..." << std::endl;

    topx::initialize::Main main;
    main.now();

    return EXIT_SUCCESS;
}
