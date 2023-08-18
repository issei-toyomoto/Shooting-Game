#include "Player.h"
#include "Common.h"
#include "Input.h"

#define DEBUG
#define DEBUG_COLLISON_SIRCLE

Player::Player() 
{
	x = 100;
	y = 100;
	vectorX = 0;
	vectorY = 0;
}

//描画以外
void Player::Update(GameMainScene* gameMain) 
{
	Input::Update();//入力更新


	//座標更新
	X();
	//x += vectorX;
	location_x += vectorX;
	Y();
	//y += vectorY;
	location_y += vectorY;
}

//描画
void Player::Draw() const
{
	DrawCircle(location_x, location_y, 20, C_WHITE, TRUE);

#ifdef DEBUG
	int sx, sy;
	sx = Input::GetJoyStickX();
	sy = Input::GetJoyStickY();
	DrawFormatString(50, 0,   C_RED,   "Player");
	DrawFormatString(50, 20,  C_WHITE, "StX %d",sx);
	DrawFormatString(50, 40,  C_WHITE, "StY %d",sy);
	DrawFormatString(50, 60,  C_WHITE, "X   %f", location_x);
	DrawFormatString(50, 80,  C_WHITE, "Y   %f", location_y);
	DrawFormatString(50, 100, C_WHITE, "VX  %f", vectorX);
	DrawFormatString(50, 120, C_WHITE, "VY  %f", vectorY);
#endif // DEBUG

#ifdef DEBUG_COLLISON_SIRCLE
	DrawCircle(location_x, location_y, 20,C_RED, FALSE);
#endif // DEBUG_COLLISON_SIRCLE

}

void Player::Hit(int damage) 
{

}

void Player::X() 
{
	if (Input::GetJoyStickX() < 0) {//左
		vectorX = -1;
	}
	else if (Input::GetJoyStickX() > 0) {//右
		vectorX = 1;
	}
	else if (Input::GetJoyStickX() == 0) {//X軸静止
		vectorX = 0;
	}
}

void Player::Y() 
{
	if (Input::GetJoyStickY() < 0) {//上
		vectorY = -1;
	}
	else if (Input::GetJoyStickY() > 0) {//下
		vectorY = 1;
	}
	else if (Input::GetJoyStickY() == 0) {//Y軸静止
		vectorY = 0;
	}
}