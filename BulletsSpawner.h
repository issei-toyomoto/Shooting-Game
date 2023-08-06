#pragma once
#include "GameMain.h"

//弾の親クラス
//弾はこれを継承して作る
class BulletsSpawner 
{
private:
	float speed;
	float angle;
	float acceleration;
	float angulVelocity;
public:
	//引数　：GameMainのポインタを受け取る
	//戻り値：なし
	//SpawnBulletで弾を生成する
	virtual void Shoot(GameMain* GameMain);
};