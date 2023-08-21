#include "Bullet.h"
#include "DxLib.h"
#include "Common.h"

#define DEBUG

Bullet::Bullet() 
{

}

void Bullet::Update()
{
	if (shootFlg == true) {
		Y();
		y -= speed;
	}
}

void Bullet::Draw() const 
{
	DrawCircle(x, y, BULLET_RADIUS, C_RED, TRUE);

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

void Bullet::SetX(int setX)
{
	x = setX;
}

void Bullet::SetY(int setY) 
{
	y = setY;
}

void Bullet::SetShootFlg(bool flg)
{
	shootFlg = flg;
}
