#include "Zombie.hpp"

void zombieOnTheHeap(void)
{
	Zombie *zombie = new Zombie("Jean-Jacques", "multicolor", 45);
	zombie->sayHi();
	delete zombie;
}

void zombieOnTheStack(void)
{
	Zombie zonbie("Micheal", "blue", 18);
	zombie.Announce();
}

int main(void)
{
	std::cout << "Pony on the stack, doesn't call any destructor" << std::endl;
	zombieOnTheStack();
	std::cout << std::endl << "Pony on the heap, call delete" << std::endl;
	zombieOnTheHeap();
}