#pragma once
/*********************************************************************/
//親クラス→なし
//継承クラス→(NwaySpawner.h)
// 
//このクラスで弾の生成をする
/*********************************************************************/
#include "GameMainScene.h"

class BulletsSpawner 
{
private:
	float speed;		//速度
	float angle;		//角度
	float acceleration;	//速度の変化量
	float angulVelocity;//角度の変化量
public:
	//引数　：GameMainのポインタを受け取る
	//戻り値：なし
	//SpawnBulletで弾を生成する
	virtual void Shoot(GameMainScene* gameMain);
};