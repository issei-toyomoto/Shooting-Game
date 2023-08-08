#include "GameMain.h"

//コンストラクタ
GameMain::GameMain() 
{
	
}

//描画以外
AbstractScene* GameMain::Update() 
{
	return this;
}

//描画
void GameMain::Draw() const
{

}

//当たり判定のチェック処理
void GameMain::HitCheck() 
{

}

//弾の配列に新しくデータを作る
void GameMain::SpawnBullet() 
{

}