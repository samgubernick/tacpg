
#include "menu/borders.hpp"

#include <iostream>
#include <string>

namespace topx	= sam::tacpg;
namespace cur	= topx::menu::borders;

char const * cur::MENU_END		= "			\\_________________________/";
char const * cur::MENU_START	= "			/~~~~~~~~~~~~~~~~~~~~~~~~~\\";

void cur::showTop(char const * menuName) {
	std::cout << std::endl << std::endl << MENU_START << std::endl << std::endl << "				" << menuName << std::endl;
}

void cur::showBottom() {
	std::cout << std::endl << MENU_END << std::endl;
}
