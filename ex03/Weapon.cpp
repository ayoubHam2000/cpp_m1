#include "Weapon.hpp"

const std::string	&Weapon::getType() const
{
	return (type);
}

void	Weapon::setType(const std::string &type)
{
	this->type = type;
}
