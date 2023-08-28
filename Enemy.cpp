#include "Enemy.h"
#include "DxLib.h"
#include "Common.h"
#include "GameMainScene.h"

Enemy::Enemy() 
{
	drawFlg = false;
	location_x = 40;
	location_y = 20;
	positionNum = GetRand(31);
	if (positionNum == 0) {
		positionNum = 1;
	}
	radius = ENEMY_RADIUS;
	location_x = location_x * positionNum;
	hp = 5;
	point = 10;

	drawCnt = 0;
	drawCntTmp = GetRand(5);
	if (drawCntTmp == 0) {//０秒
		drawCntNum = 1;
	}
	else if (drawCntTmp == 1) {//５秒
		drawCntNum = 5 * 60;
	}
	else if (drawCntTmp == 2) {//１０秒
		drawCntNum = 10 * 60;
	}
	else if (drawCntTmp == 3) {//１５秒
		drawCntNum = 15 * 60;
	}
	else if (drawCntTmp == 4) {//２０秒
		drawCntNum = 20 * 60;
	}
	else if (drawCntTmp == 5) {
		drawCntNum = 25 * 60;
	}
}

void Enemy::Update(GameMainScene* gameMain)
{
	shootCnt++;
	drawCnt++;

	if (drawCnt == drawCntNum) {
		drawFlg = true;
	}


	if (shootCnt % 40 == 0 && hp >= 0 && drawFlg == true) {
		gameMain->SpawnBullet(location_x, location_y, ENEMY);
	}
	
	if (drawFlg == true) {
		Y();
		location_y += vectorY;
	}
	
	if (location_y >= _SCREEN_HEIGHT_) {
		drawFlg = false;
	}

	if (shootCnt > 60) {//１秒たったらカウントを０にする
		shootCnt = 0;
	}
	if (drawCnt = 30 * 60) {
		drawCnt = 0;
	}
}

void Enemy::Draw() const
{
	if (hp >= 0 && drawFlg == true) {
		DrawCircle((int)location_x, (int)location_y, (int)radius, C_GREEN, TRUE);
	}
}

void Enemy::Hit(int damage)
{

}

void Enemy::X() 
{

}

void Enemy::Y() 
{
	vectorY = 0.3f;
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
