#pragma once
#include "CharaBase.h"
#include "GameMain.h"

class Enemy
{
private:
	int hp;
	int point;
	
public:
	void Update(GameMain* GameMain)override;
};

