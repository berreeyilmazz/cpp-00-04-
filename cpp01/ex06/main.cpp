#include "Harl.h"

void mySwitchCase(char *av1, Harl harl) {
    switch (av1[0]) {
        case 'D':
			harl.complain("DEBUG");
        case 'I':
			harl.complain("INFO");
        case 'W':
			harl.complain("WARNING");
        case 'E':
			harl.complain("ERROR");
    }
}

int main(int ac, char **av)
{
    if (ac != 2) {
        std::cout << "Wrong or missing parameter!" << std::endl;
        return 1;
    }
	std::string av1 = av[1];
    if (av1 != "DEBUG" && av1 != "INFO" 
	 && av1 != "WARNING" && av1 != "ERROR")
	{
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return 0;
    }
	Harl harl;
    mySwitchCase(av[1], harl);
}