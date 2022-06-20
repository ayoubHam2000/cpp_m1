#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP
# include "Weapon.hpp"

class HumanB
{
private:
	std::string		name;
	const Weapon	*weapon;
public:
	HumanB(const std::string &name): name(name){}
	void	setWeapon(const Weapon &weapon);
	void	attack() const;
};

#endif
