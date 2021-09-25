#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>
# include <iomanip>

class Zombie {
    public:
                        Zombie(void);
                        ~Zombie(void);
            void        Announce(void);
            void        zombieInitName(std::string name);
            void        hordeInit(int N, Zombie *horde, std::string name);
            void        newZombie(std::string name);
            void        zombieSetName(Zombie *zombie, int i);
    private:
            std::string name;
            Zombie *_zombieHorde;
            std::string _zombieName[5];

};

Zombie* zombieHorde( int N, std::string name );
void    randomChump(std::string name);

#endif