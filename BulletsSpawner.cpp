#include "BulletsSpawner.h"

void BulletsSpawner::Shoot(GameMainScene* gameMain)
{
	if (gameMain->GetLife() != -1) {//プレイヤーの残機数がある場合
		speed = BULLET_SPPED;
	}
}
