#include "Prac_Boss.h"
#include <iostream>

Boss::Boss(std::string name) :Character(name)
{
	
}

void Boss::Attack()
{
	std::cout << GetName() << " attacks with a powerful strike!" << std::endl;
}