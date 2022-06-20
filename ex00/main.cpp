#include "Zombie.h"

int	main()
{
	Zombie *z;

	z = newZombie("m7job");
	z->announce();
	delete z;
	randomChump("rabi3a tabi3a");
	return (0);
}
