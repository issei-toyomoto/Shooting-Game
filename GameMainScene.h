#pragma once
#include "AbstractScene.h"
#include "Common.h"

class GameMainScene :public AbstractScene
{
private:
	

	//プレイヤー
	int player;
	int life;//残機

	//敵
	int* pEnemy[MAX_ENEMY_NUM];
	

	//弾
	int* pBullets[MAX_BULLET_NUM];

public:
	//コンストラクタ
	GameMainScene();
	//デストラクタ
	virtual ~GameMainScene() {};

	//描画以外の更新を実装する
	virtual AbstractScene* Update() override;

	//描画に関することを実装する
	virtual void Draw() const  override;

	/*
	* 引数　：なし
	* 戻り値：なし
	* 弾・プレイヤー・敵の当たり判定のチェックを行う
	*/
	void HitCheck();

	/*
	* 引数　：なし
	* 戻り値：なし
	* 弾の配列に新しくデータを作成する
	*/
	void SpawnBullet();
};

