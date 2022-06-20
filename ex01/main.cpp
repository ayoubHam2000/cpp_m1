#include "Zombie.h"

int	main()
{
	Zombie *horde;

	horde = zombieHorde(3, "m7job");
	for (int i = 0; i < 3; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
	return (0);
}
