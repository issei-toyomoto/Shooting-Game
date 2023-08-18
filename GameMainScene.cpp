#include "GameMainScene.h"

//コンストラクタ
GameMainScene::GameMainScene()
{
	
}

//デストラクタ
GameMainScene::~GameMainScene() 
{
	delete[]enemy;
	
}

//描画以外
AbstractScene* GameMainScene::Update()
{
	GameMainScene GMS;
	player.Update(&GMS);
	return this;
}

//描画
void GameMainScene::Draw() const
{
	player.Draw();
}

//当たり判定のチェック処理
void GameMainScene::HitCheck()
{

}

//弾の配列に新しくデータを作る
void GameMainScene::SpawnBullet()
{

}