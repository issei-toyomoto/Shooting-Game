#pragma once
#include "BulletsSpawner.h"
#include "GameMainScene.h"

class NwaySpawner :public BulletsSpawner
{
private:
	int numBullets;//���˂���e�̐�
	float baseAngle;//���˂���ŏ��̒e�̌���
	float angleDiff;//�e���m�̊p�x��
public:
	void Shoot(GameMainScene* GameMain) override;
};

