#pragma once
#include "Servant.h"

class Saber :public Servant
{
public:
	void Attack() override;

	void ShowProfile() override;
};