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
	int positionNum;//敵のわき位置

	float vectorX;	//ベクトルX軸（１フレームの移動量）
	float vectorY;	//ベクトルY軸（１フレームの移動量）

	int shootCnt;	//弾の発射するタイミングをカウント

	int drawCnt;	//描画までのカウント
	int drawCntNum;	//描画するフレーム
	int drawCntTmp;	//描画までの時間を決める用の変数

protected:

public:
	int hp;			//敵の体力
	bool drawFlg;	//描画するか（true:描画 false:描画しない）
	int point;		//倒した時のポイント

	//コンストラクタ
	Enemy();

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

	void X();
	void Y();

	float GetX();
	float GetY();
};

