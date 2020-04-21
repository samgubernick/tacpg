
#include "initialize/main.hpp"

#include "menu/top/main.hpp"

#include <iostream>

namespace topx	= sam::tacpg;
namespace cur	= topx::initialize;

cur::Main::Main() {

}

void cur::Main::now() {
	std::cout << "		Tactical Action Command Prompt Game" << std::endl;

	auto menu = topx::menu::top::Main(input);
	menu.open();

	input.setListener(menu.getInputListener());
	input.startListening();
}
