#include "Bullet.h"
#include "DxLib.h"
#include "Common.h"
#include "Enemy.h"

#define DEBUG

Bullet::Bullet() 
{
	shootFlg = false;
	x = 0;
	y = 0;

	damage = 0;
	speed = 0;
	angle = 0;
	acceleration = 0;
	angleVelocity = 0;
}

void Bullet::Update()
{
	//当たり判定
	location_x = x;
	location_y = y;
	radius = BULLET_RADIUS;

	//座標処理
	if (shootFlg == true) {
		y += speed;
	}

	if (y <= 0 || y >= _SCREEN_HEIGHT_) {//弾が画面外に居たら描画しない
		shootFlg = false;
	}
}

void Bullet::Draw() const 
{
	if (shootFlg == true) {
		DrawCircle((int)x, (int)y, (int)BULLET_RADIUS, C_RED, TRUE);
	}

#ifdef DEBUG
	
#endif // DEBUG

}

void Bullet::GetDamage()
{

}

void Bullet::X()
{
	speed = 1;
}

void Bullet::Y()
{
	//speed = BULLET_SPPED;
}
