#pragma once
#include "AbstractScene.h"
#include "Common.h"
#include "CharaBase.h"
class CharaBase;
#include "Player.h"
#include "Enemy.h"
#include "Bullet.h"

class GameMainScene :public AbstractScene
{
private:
	//デバッグ用変数
	int bulletsNum = 0;
	int Hit = 0;


	//プレイヤー
	Player player;	//プレイヤーのオブジェクト
	int life;		//プレイヤー残機
	int totalScore;	//現在のスコア

	//敵
	Enemy* enemy = new Enemy[MAX_ENEMY_NUM];//敵のオブジェクト

	//弾
	Bullet* bullets = new Bullet[MAX_BULLET_NUM];//弾のオブジェクト

protected:

public:
	//コンストラクタ
	GameMainScene();
	//デストラクタ
	virtual ~GameMainScene();

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
	* 引数　：int型X軸　int型Y軸　int型敵かプレイヤーか（０：敵　１：プレイヤー）
	* 戻り値：なし
	* 弾の配列に新しくデータを作成する
	*/
	void SpawnBullet(float location_x, float location_y, int chara);

	int GetLife();
};

