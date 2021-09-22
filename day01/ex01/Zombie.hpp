#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>
# include <iomanip>
# include <sstream>

class Zombie {
    public:
            Zombie(std::string name);
            ~Zombie(void);
            void        Announce(void);
            void        initName(void);
            void        initZombie(int N);
    private:
                std::string     zombieName[8];
                std::string     name;
                Zombie          *Horde;

};

Zombie *newZombie(std::string name);
Zombie* zombieHorde(int N, std::string name);
void        initZombie(int N);

#endif