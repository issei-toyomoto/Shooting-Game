#pragma once
#include "CharaBase.h"
#include "GameMainScene.h"

class Player :public CharaBase
{
private:
	int score;//現在のスコア
	int weapon;//

	float x;
	float y;
	float vectorX;
	float vectorY;

public:
	//コンストラクタ
	Player();

	/*
	* 引数　：GameMainのポインタを受け取る
	* 戻り値：なし
	* 描画以外の更新を実装する
	*/
	void Update(GameMainScene* gameMain)override;

	/*
	* 引数　：なし
	* 戻り値：なし
	*描画の更新を実装する
	*/
	void Draw() const override;

	/*
	* 引数　：damageでダメージを受け取る
	* 戻り値：なし
	* ダメージを受けたときの処理
	*/
	void Hit(int damage)override;

	/*
	* 引数　：なし
	* 戻り値：なし
	* X軸の処理
	*/
	void X();

	/*
	* 引数　：なし
	* 戻り値：なし
	* Y軸の処理
	*/
	void Y();
};