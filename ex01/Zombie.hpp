#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class	Zombie
{
private:
	std::string name;
public:
	~Zombie();
	void		announce(void);
	std::string	getName() const;
	void		setName(const std::string &name);
};

#endif
