#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>
# include <iomanip>

class Zombie {
    public:
            Zombie(std::string name);
            ~Zombie(void);
            void    Announce(void);
    private:
            std::string name;

};

Zombie *newZombie(std::string name);
Zombie* zombieHorde(int N, std::string name);

#endif