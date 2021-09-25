#include "Zombie.hpp"

void    Zombie::newZombie(std::string name)
{
	this->name = name;
    std::cout << "zombie " << name << std::endl;
}
