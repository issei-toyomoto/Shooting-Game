#pragma once
/*********************************************************************/
//親クラス→(BulletsSpawner.h)
//継承クラス→なし
// 
//このクラスで弾の発射する向き、数を管理する
/*********************************************************************/
#include "BulletsSpawner.h"
#include "GameMainScene.h"

class NwaySpawner :public BulletsSpawner
{
private:
	int numBullets;//発射する弾の数
	float baseAngle;//発射する最初の弾の向き
	float angleDiff;//弾同士の角度差

protected:

public:
	void Shoot(GameMainScene* gameMain) override;
};

