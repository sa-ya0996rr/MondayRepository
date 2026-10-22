#pragma once
#include "Servant.h"

class Archer :public Servant
{
public:
	void Attack() override;
	void ShowProfile() override;
};