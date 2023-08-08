#pragma once
#include "CharaBase.h"
#include "GameMain.h"

class Enemy :public CharaBase
{
private:
	int hp;
	int point;
	
public:
	/*
	* 引数　：GameMainのポインタを受け取る
	* 戻り値：なし
	* 描画以外の更新を実装する
	*/
	void Update(GameMain* gameMain) override;

	/*
	* 引数　：
	* 戻り値：
	* 
	*/
	void Draw() override;

	/*
	* 引数　：
	* 戻り値：
	* 
	*/
	void Hit(int damage) override;
};

