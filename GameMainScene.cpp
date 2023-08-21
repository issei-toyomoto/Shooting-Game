#include "GameMainScene.h"
#include "NwaySpawner.h"

//コンストラクタ
GameMainScene::GameMainScene()
{
	
}

//デストラクタ
GameMainScene::~GameMainScene() 
{
	life = 2;
	delete[]enemy;
	delete[]bullets;
}

//描画以外
AbstractScene* GameMainScene::Update()
{
	player.Update(this);
	bullets->Update();
	
	return this;
}

//描画
void GameMainScene::Draw() const
{
	player.Draw();
	bullets->Draw();
	
}

//当たり判定のチェック処理
void GameMainScene::HitCheck()
{

}

//弾の配列に新しくデータを作る
void GameMainScene::SpawnBullet(int x, int y)
{
	bullets->SetShootFlg(true);
	bullets->SetX(x);
	bullets->SetY(y);
}

int GameMainScene::GetLife() 
{
	int tmp = life;
	return tmp;
}