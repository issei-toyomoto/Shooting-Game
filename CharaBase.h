#pragma once
/*********************************************************************/
//親クラス→(SphereCollider.h)
//継承クラス→(Player.h Enemy.h)
// 
//親クラスのSphereColliderから当たり判定を継承され、
//継承先のクラスにダメージを受けた時の処理をこのクラスで書く
/*********************************************************************/
#include "SphereCollider.h"
class GameMainScene;

class CharaBase :public SphereCollider
{
private:
	
protected:
	SphereCollider sphereCollider;
	float speed;
	int image;

public:
	CharaBase();

	/*
	* 引数　：GameMainのポインタ
	* 戻り値：なし
	* 描画以外の更新を実装する
	*/
	virtual void Update(GameMainScene* gameMain);

	/*
	* 引数　：なし
	* 戻り値：なし
	* 描画の更新を実装する
	*/
	virtual void Draw() const;

	/*
	* 引数　：damageでダメージを受け取る
	* 戻り値：なし
	* ダメージを受けたときの処理
	*/
	virtual void Hit(int damage);
};