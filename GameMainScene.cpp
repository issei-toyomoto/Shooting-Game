#include "GameMainScene.h"

//コンストラクタ
GameMainScene::GameMainScene()
{
	
}

//描画以外
AbstractScene* GameMainScene::Update()
{
	//player.Update();
	return this;
}

//描画
void GameMainScene::Draw() const
{
	//player.Draw();
}

//当たり判定のチェック処理
void GameMainScene::HitCheck()
{

}

//弾の配列に新しくデータを作る
void GameMainScene::SpawnBullet()
{

}