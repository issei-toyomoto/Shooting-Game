#pragma once
/*********************************************************************/
//親クラス→(CharaBase.h)
//継承クラス→なし
// 
//
/*********************************************************************/
#include "CharaBase.h"

class Enemy :public CharaBase
{
private:
	int hp;//敵の体力
	int point;//倒した時のポイント
	
public:
	/*
	* 引数　：GameMainのポインタを受け取る
	* 戻り値：なし
	* 描画以外の更新を実装する
	*/
	void Update(GameMainScene* gameMain) override;

	/*
	* 引数　：
	* 戻り値：
	* 
	*/
	void Draw() const override;

	/*
	* 引数　：
	* 戻り値：
	* 
	*/
	void Hit(int damage) override;
};

