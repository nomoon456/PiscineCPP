#include "Zombie.hpp"

void    Zombie::zombieInitName(std::string name)
{
    _zombieName[0] = name;
    _zombieName[1] = "joe";
    _zombieName[2] = "arrrr";
    _zombieName[3] = "saj";
    _zombieName[4] = "raze?";
}

void    Zombie::zombieSetName(Zombie *zombie, int i)
{
    newZombie(_zombieName[i]);
}

void    Zombie::hordeInit(int N, Zombie *horde, std::string name)
{
    _zombieHorde = horde;
    zombieInitName(name);
    for(int i = 0; i < N; i++)
    {
        Zombie::zombieSetName(&(_zombieHorde[i]), i);
    }
    //delete [] _zombieHorde;

}

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *horde = new Zombie[5];
    horde->hordeInit(N, horde, name);
    return horde;
}