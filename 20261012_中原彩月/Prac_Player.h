#pragma once
#include "Prac_Character.h"

class Prac_Player
{
public:
	Prac_Player(std::string name);
	void Atack(); override;
};