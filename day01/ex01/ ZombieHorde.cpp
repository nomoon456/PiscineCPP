#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    for (int i = 0; N > i; N--)
    {
        Zombie zombie(name);
        newZombie(name);
    }
    
}