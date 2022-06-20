#include "Zombie.hpp"

Zombie::~Zombie()
{
	std::cout << name << " : is dead no brain" << std::endl;
}

std::string	Zombie::getName() const
{
	return (name);
}

void	Zombie::setName(const std::string &name)
{
	this->name = name;
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
