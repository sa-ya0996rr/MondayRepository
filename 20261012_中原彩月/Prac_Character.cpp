#include "Prac_Character.h"
#include <iostream>

Character::Character(std::string name)
{
	this->name = name;
}

std::string Character::GetName()
{
	return name;
}

void Character::Attack()
{
	std::cout << "UŒ‚‚µ‚½I" << std::endl;
}