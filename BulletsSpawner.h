#pragma once
#include "GameMain.h"

//�e�̐e�N���X
//�e�͂�����p�����č��
class BulletsSpawner 
{
private:
	float speed;
	float angle;
	float acceleration;
	float angulVelocity;
public:
	//�����@�FGameMain�̃|�C���^���󂯎��
	//�߂�l�F�Ȃ�
	//SpawnBullet�Œe�𐶐�����
	virtual void Shoot(GameMain* GameMain);
};