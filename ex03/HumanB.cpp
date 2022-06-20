#include "HumanB.hpp"

void	HumanB::setWeapon(const Weapon &weapon)
{
	this->weapon = &weapon;
}

void	HumanB::attack() const
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}
