#include "Player.h"
#include "Common.h"
#include "Input.h"

Player::Player() 
{

}

//�`��ȊO
void Player::Update(GameMainScene* gameMain) 
{
	Input::Update();//���͍X�V


	//���W�X�V
	X();
	x += vectorX;
	Y();
	y += vectorY;
}

//�`��
void Player::Draw() 
{
	
}

void Player::Hit(int damage) 
{

}

void Player::X() 
{
	if (Input::GetJoyStickX() < 0) {//�E
		vectorX = 1;
	}
	else if (Input::GetJoyStickX() > 0) {//��
		vectorX = -1;
	}
	else if (Input::GetJoyStickX == 0) {//X���Î~
		vectorX = 0;
	}
}

void Player::Y() 
{
	if (Input::GetJoyStickY() < 0) {//��
		vectorY = -1;
	}
	else if (Input::GetJoyStickY() > 0) {//��
		vectorY = 1;
	}
	else if (Input::GetJoyStickY() == 0) {//Y���Î~
		vectorY = 0;
	}
}