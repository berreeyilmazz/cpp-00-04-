#include "Zombie.h"

int main()
{
    randomChump("stacK");

	Zombie *zomb = newZombie("heaP");
	zomb->announce();
	delete zomb;
    return (0);

}
