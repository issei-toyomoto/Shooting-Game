#include "Bullet.h"
#include "DxLib.h"
#include "Common.h"

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
	angulVelocity = 0;
}

void Bullet::Update()
{
	//当たり判定
	location_x = x;
	location_y = y;

	//座標処理
	Y();
	y -= speed;

	if (y <= 0) {
		shootFlg = false;
	}
}

void Bullet::Draw() const 
{
	DrawCircle((int)x, (int)y, (int)BULLET_RADIUS, C_RED, TRUE);

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
	speed = BULLET_SPPED;
}
