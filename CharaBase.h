#pragma once
#include "SphereCollider.h"
#include "GameMainScene.h"

class CharaBase :public SphereCollider 
{
private:
	float speed;
	int image;

public:
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
	virtual void Draw() {};

	/*
	* 引数　：damageでダメージを受け取る
	* 戻り値：なし
	* ダメージを受けたときの処理
	*/
	virtual void Hit(int damage);
};