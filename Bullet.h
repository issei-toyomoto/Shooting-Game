#pragma once
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

