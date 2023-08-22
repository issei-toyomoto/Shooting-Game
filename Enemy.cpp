#include "Enemy.h"
#include "DxLib.h"
#include "Common.h"

Enemy::Enemy() 
{
	location_x = 0;
	location_y = 0;
	radius = ENEMY_RADIUS;
	hp = 5;
}

void Enemy::Update(GameMainScene* gameMain)
{
	location_x = 600;
	location_y = 40;
	if (CheckCollision(sphereCollider) == 1) {
		location_x = 800;
	}
}

void Enemy::Draw() const
{
	DrawCircle((int)location_x, (int)location_y, (int)radius, C_GREEN, TRUE);
}

void Enemy::Hit(int damage)
{

}

void X() 
{

}

void Y() 
{

}
