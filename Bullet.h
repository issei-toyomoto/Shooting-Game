#pragma once
/*********************************************************************/
//親クラス→(SphereCollider.h)
//継承クラス→なし
// 
//親クラスのSphereColliderから当たり判定をとり当たったものにGetDamage
//でダメージを与える
//このクラスは弾の動きを書く
/*********************************************************************/
#include "SphereCollider.h"

class Bullet :public SphereCollider
{
private:
	int damage;
	float speed;
	float angle;
	float acceleration;
	float angulVelocity;
public:
	/*
	* 引数　：なし
	* 戻り値：なし
	* 描画以外の更新を実装する
	*/
	void Update();

	/*
	* 引数　：なし
	* 戻り値：なし
	* 描画の更新を実装する
	*/
	void Draw();

	/*
	* 引数　：なし
	* 戻り値：なし
	* ダメージを与える
	*/
	void GetDamage();
};

