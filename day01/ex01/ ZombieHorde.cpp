#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie::initName;
    for (int i = 0; i < N; i++)
    {
        Zombie::initZombie(N);
    }
}

void    Zombie::initZombie(int N)
{
    Horde = new Zombie(zombieName[N]);
}

void    Zombie::initName(void)
{
    zombieName[0] = "joe";
    zombieName[1] = "Brrrr";
    zombieName[2] = "Iree";
    zombieName[3] = "Errennnn";
    zombieName[4] = "DOTEBAYooo";
    zombieName[5] = "Mia";
    zombieName[6] = "Niet";
    zombieName[7] = "kakdiladruk";
}