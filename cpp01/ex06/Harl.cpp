#include "Harl.h"

Harl::Harl() {
	return;
}

Harl::~Harl() {
	return;
}

void Harl::debug(void) {
	std::cout << "Harl is debugging..." << std::endl;
}

void Harl::info(void) {
	std::cout << "Harl is giving information." << std::endl;
}
void Harl::warning(void) {
	std::cout << "Harl warns you!" << std::endl;
}

void Harl::error(void) {
	std::cout << "error? error." << std::endl;
}

void Harl::complain(std::string level) {
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	callLevels call[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int i = 0;
    std::cout << "[ " << level << " ]" << std::endl;
	while (i < 4) {
		if(level == levels[i])
			(this->*call[i])();
		i++;
	}
    std::cout << std::endl;
}