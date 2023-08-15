#include "Player.h"
#include "Common.h"
#include "Input.h"

Player::Player() 
{
	x = 0;
	y = 0;
}

//描画以外
void Player::Update(/*GameMainScene* gameMain*/) 
{
	Input::Update();//入力更新


	//座標更新
	X();
	x += vectorX;
	Y();
	y += vectorY;
}

//描画
void Player::Draw() const
{
	DrawTriangle(x, y, x + 30, y + 30, x - 30, y - 30, C_GREEN, TRUE);
}

void Player::Hit(int damage) 
{

}

void Player::X() 
{
	if (Input::GetJoyStickX() < 0) {//右
		vectorX = 1;
	}
	else if (Input::GetJoyStickX() > 0) {//左
		vectorX = -1;
	}
	else if (Input::GetJoyStickX == 0) {//X軸静止
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