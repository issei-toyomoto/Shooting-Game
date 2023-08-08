#pragma once
#include "CharaBase.h"
#include "GameMain.h"

class Player :public CharaBase
{
private:
	int score;
	int weapon;
public:
	/*
	* 引数　：GameMainのポインタを受け取る
	* 戻り値：なし
	* 描画以外の更新を実装する
	*/
	void Update(GameMain* gameMain)override;

	/*
	* 引数　：なし
	* 戻り値：なし
	*描画の更新を実装する
	*/
	void Draw()override;

	/*
	* 引数　：damageでダメージを受け取る
	* 戻り値：なし
	* ダメージを受けたときの処理
	*/
	void Hit(int damage)override;
};