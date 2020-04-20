
#include "input/main.hpp"

#include "input/i_listener.hpp"

#include <iostream>
#include <string>

namespace topx	= sam::tacpg;
namespace cur	= topx::input;

cur::Main::Main()
	: listening(true) {

}

cur::IListener & cur::Main::getListener() {
	return *listener;
}

void cur::Main::setListener(cur::IListener & listener) {
	this->listener = &listener;
}

void cur::Main::startListening() {
	listening = true;

	for (auto line = std::string(); std::getline(std::cin, line);) {
		if (listening) {
			listener->receiveInput(line);

			if (!listening) {	// check the status again in case it changed
				return;
			}
		}
		else {
			return;
		}
	}
}

void cur::Main::stopListening() {
	listening = false;
}
