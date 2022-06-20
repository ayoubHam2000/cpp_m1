#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP
# include "Weapon.hpp"

class HumanA
{
private:
	std::string		name;
	const Weapon	&weapon;
public:
	HumanA(const std::string name, const Weapon &weapon): name(name), weapon(weapon){}
	void	attack() const;
};
#endif
