#include "BulletsSpawner.h"

void BulletsSpawner::Shoot(GameMainScene* gameMain)
{
	if (gameMain->GetLife() != -1) {//�v���C���[�̎c�@��������ꍇ
		speed = BULLET_SPPED;
	}
}
