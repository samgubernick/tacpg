
// no include file

#include "initialize/main.hpp"

namespace topx	= sam::tacpg;

extern "C" int main(int argCount, char* argValues[])
{
    topx::initialize::Main main;
    main.now();

    return EXIT_SUCCESS;
}
