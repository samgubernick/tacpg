
#include "initialize/main.hpp"

#include "menu/main.hpp"

#include <iostream>

namespace topx	= sam::tacpg;
namespace cur	= topx::initialize;

cur::Main::Main() {

}

void cur::Main::now() {
	std::cout << "Welcome to the game!" << std::endl;

	auto menu = topx::menu::Main(input);
	menu.display();

	input.setListener(menu);
	input.startListening();
}
