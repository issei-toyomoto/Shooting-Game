#include "CharaBase.h"
#include "GameMainScene.h"

CharaBase::CharaBase() 
{
	speed = 0;
	image = 0;
}

void CharaBase::Update(GameMainScene* gameMain)
{
	if (CheckCollision(sphereCollider) == 1) {
		Hit(10);
	}
}

void CharaBase::Draw() const 
{

}

void CharaBase::Hit(int damage) 
{
	
}