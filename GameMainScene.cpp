#include "GameMainScene.h"
#include "NwaySpawner.h"

//コンストラクタ
GameMainScene::GameMainScene()
{
	//bullets = nullptr;
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
	for (int i = 0; i < ONEWAY_BULLET_NUM; i++) {
		bullets[i].Update();
	}

	return this;
}

//描画
void GameMainScene::Draw() const
{
	player.Draw();
	for (int i = 0; i < ONEWAY_BULLET_NUM; i++) {
		bullets[i].Draw();
	}
	DrawFormatString(500, 500, C_RED, "bulletsNum %d", bulletsNum);
}

//当たり判定のチェック処理
void GameMainScene::HitCheck()
{

}

//弾の配列に新しくデータを作る
void GameMainScene::SpawnBullet(float location_x, float location_y, int chara)
{
	for (int i = 0; i < ONEWAY_BULLET_NUM; i++) {
		if (bullets[i].shootFlg == false) {
			if (chara == PLAYER) {
				location_x = player.GetX();
				location_y = player.GetY() - 25;

				bullets[i].speed = BULLET_SPPED;
				bullets[i].x = location_x;
				bullets[i].y = location_y;
				bullets[i].shootFlg = true;
				bulletsNum++;
				break;
			}
			else if (chara == ENEMY) {

				break;
			}
		}
	}
}

int GameMainScene::GetLife() 
{
	int tmp = life;
	return tmp;
}