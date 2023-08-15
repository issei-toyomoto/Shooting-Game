#pragma once
#include "GameMainScene.h"
#include "SphereCollider.h"

class CharaBase :public SphereCollider 
{
private:
	SphereCollider sphereCollider;
	float speed;
	int image;

public:
	/*
	* 引数　：GameMainのポインタ
	* 戻り値：なし
	* 描画以外の更新を実装する
	*/
	virtual void Update(/*GameMainScene* gameMain*/);

	/*
	* 引数　：なし
	* 戻り値：なし
	* 描画の更新を実装する
	*/
	virtual void Draw() const {};

	/*
	* 引数　：damageでダメージを受け取る
	* 戻り値：なし
	* ダメージを受けたときの処理
	*/
	virtual void Hit(int damage);
};