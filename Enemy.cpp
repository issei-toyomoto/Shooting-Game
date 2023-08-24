#include "Enemy.h"
#include "DxLib.h"
#include "Common.h"
#include "GameMainScene.h"

Enemy::Enemy() 
{
	location_x = 650;
	location_y = 40;
	radius = ENEMY_RADIUS;
	hp = 5;
	point = 10;
}

void Enemy::Update(GameMainScene* gameMain)
{
	shootCnt++;

	if (shootCnt % 30 == 0) {
		gameMain->SpawnBullet(location_x, location_y, ENEMY);
	}

	location_x = 650;
	location_y = 40;

	if (shootCnt > 60) {//１秒たったらカウントを０にする
		shootCnt = 0;
	}
}

void Enemy::Draw() const
{
	DrawCircle((int)location_x, (int)location_y, (int)radius, C_GREEN, TRUE);
}

void Enemy::Hit(int damage)
{

}

void Enemy::X() 
{

}

void Enemy::Y() 
{

}

float Enemy::GetX() 
{
	float x = location_x;
	return x;
}

float Enemy::GetY() 
{
	float y = location_y;
	return y;
}
