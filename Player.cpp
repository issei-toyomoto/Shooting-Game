#include "Player.h"
#include "Common.h"
#include "Input.h"
#include "GameMainScene.h"

#define DEBUG
#define DEBUG_COLLISON_SIRCLE

Player::Player() 
{
	location_x = 650;
	location_y = 650;

	bullets = 0;
	vectorX = 0;
	vectorY = 0;
	speed = PLAYER_SPEED;
	radius = PLAYER_RADIUS;
}

//描画以外
void Player::Update(GameMainScene* gameMain) 
{
	Input::Update();//入力更新

	if (Input::Getkey(PAD_INPUT_B) == TRUE) {
		
		if (bBtnCnt % 6 == 0) {//６フレームごとに発射する
			gameMain->SpawnBullet(location_x, location_y, PLAYER);
			bullets++;
		}
		bBtnCnt++;
	}
	else {
		bullets = 0;
		bBtnCnt = 0;
	}

	//座標更新
	X();
	location_x += vectorX;
	Y();
	location_y += vectorY;
}

//描画
void Player::Draw() const
{
	DrawCircle((int)location_x, (int)location_y, (int)radius, C_WHITE, TRUE);

#ifdef DEBUG
	int sx, sy;
	sx = Input::GetJoyStickX();
	sy = Input::GetJoyStickY();
	DrawFormatString(50, 0,   C_RED,   "Player");
	DrawFormatString(50, 20,  C_WHITE, "StX %d", sx);
	DrawFormatString(50, 40,  C_WHITE, "StY %d", sy);
	DrawFormatString(50, 60,  C_WHITE, "X   %f", location_x);
	DrawFormatString(50, 80,  C_WHITE, "Y   %f", location_y);
	DrawFormatString(50, 100, C_WHITE, "VX  %f", vectorX);
	DrawFormatString(50, 120, C_WHITE, "VY  %f", vectorY);
	DrawFormatString(50, 140, C_WHITE, "bullets %d", bullets);
	DrawFormatString(50, 160, C_WHITE, "BCnt    %d", bBtnCnt);
#endif // DEBUG

#ifdef DEBUG_COLLISON_SIRCLE
	DrawCircle((int)location_x, (int)location_y, (int)radius,C_RED, FALSE);
#endif // DEBUG_COLLISON_SIRCLE

}

void Player::Hit(int damage) 
{

}

void Player::X() 
{
	if (Input::GetJoyStickX() < 0) {//左
		vectorX = -speed;
	}
	else if (Input::GetJoyStickX() > 0) {//右
		vectorX = speed;
	}
	else if (Input::GetJoyStickX() == 0) {//X軸静止
		vectorX = 0;
	}
}

void Player::Y() 
{
	if (Input::GetJoyStickY() < 0) {//上
		vectorY = -speed;
	}
	else if (Input::GetJoyStickY() > 0) {//下
		vectorY = speed;
	}
	else if (Input::GetJoyStickY() == 0) {//Y軸静止
		vectorY = 0;
	}
}

float Player::GetX()
{
	float X = location_x;
	return X;
}

float Player::GetY()
{
	float Y = location_y;
	return Y;
}