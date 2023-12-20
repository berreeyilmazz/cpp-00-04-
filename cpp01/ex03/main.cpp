#include "HumanB.h"
#include "HumanA.h"
#include "Weapon.h"

int main()
  {
    /*
    Weapon  club = Weapon("crude spiked club");
    HumanA bob("günce", club);
    std::cout << std::endl;
    std::cout << "----------------1----------------" << std::endl;
    bob.attack();
    club.setType("some other type of club");
    std::cout << std::endl << std::endl;
    std::cout << "----------------2----------------" << std::endl;
    bob.attack();
    std::cout << std::endl;
    std::cout << "---------------------------------" << std::endl;

    return (0);
} 
{ */
	Weapon  club = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(club);
	std::cout << std::endl;
	std::cout << "----------------1----------------" << std::endl;
	jim.attack();
	std::cout << std::endl << std::endl;
	std::cout << "----------------2----------------" << std::endl;
	club.setType("some other type of club");
	jim.attack();    
	std::cout << std::endl;
	std::cout << "---------------------------------" << std::endl;
	system ("leaks ninjaWarrior");

  }
