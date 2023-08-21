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
	bool shootFlg;//発射しているか？
	float x;
	float y;

	int damage;
	float speed;
	float angle;
	float acceleration;
	float angulVelocity;

protected:

public:
	//コンストラクタ
	Bullet();

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
	void Draw() const;

	/*
	* 引数　：なし
	* 戻り値：なし
	* ダメージを与える
	*/
	void GetDamage();

	/*
	* 引数　：
	* 戻り値：
	* X軸の処理
	*/
	void X();

	/*
	* 引数　：
	* 戻り値：
	* Y軸の処理
	*/
	void Y();

	void SetX(int setX);
	void SetY(int setY);
	void SetShootFlg(bool flg);
};

