#pragma once
#include "BulletsSpawner.h"
#include "GameMain.h"

class NwaySpawner :public BulletsSpawner
{
private:
	int numBullets;//���˂���e�̐�
	float baseAngle;//���˂���ŏ��̒e�̌���
	float angleDiff;//�e���m�̊p�x��
public:
	void Shoot(GameMain* GameMain) override;
};

