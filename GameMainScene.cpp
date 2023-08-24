#include "GameMainScene.h"
#include "NwaySpawner.h"

#define DEBUG

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
	enemy[0].Update(this);
	for (int i = 0; i < MAX_BULLET_NUM; i++) {
		bullets[i].Update();
	}
	HitCheck();
	return this;
}

//描画
void GameMainScene::Draw() const
{
	player.Draw();
	enemy[0].Draw();
	for (int i = 0; i < MAX_BULLET_NUM; i++) {
		bullets[i].Draw();

		if (bullets[i].y <= 0 || bullets[i].y >= _SCREEN_HEIGHT_) {
			
		}
	}

#ifdef DEBUG
	DrawFormatString(500, 500, C_RED, "bulletsNum %d", bulletsNum);
	DrawFormatString(500, 520, C_RED, "Hit %d", Hit);
#endif // DEBUG

}

//当たり判定のチェック処理
void GameMainScene::HitCheck()
{
	//弾と敵の当たり判定
	for (int i = 0; i < MAX_BULLET_NUM; i++) {
		for (int j = 0; j < MAX_ENEMY_NUM; j++) {
			if (bullets[i].CheckCollision(enemy[j]) == 1) {
				bullets[i].shootFlg = false;
				enemy[j].hp--;
			}
		}
	}

	//弾と弾の当たり判定
	/*for (int i = 0; i < MAX_BULLET_NUM; i++) {
		for (int j = 1; j < MAX_BULLET_NUM; j++) {
			if (bullets[i].CheckCollision(bullets[j]) == 1) {
				bullets[i].shootFlg = false;
				bullets[j].shootFlg = false;
			}
		}
	}*/
}

//弾の配列に新しくデータを作る
void GameMainScene::SpawnBullet(float location_x, float location_y, int chara)
{
	if (chara == PLAYER) {
		for (int i = 0; i < ONEWAY_PLAYER_BULLET_NUM; i++) {
			if (bullets[i].shootFlg == false) {
				bullets[i].speed = -BULLET_SPPED;
				bullets[i].x = location_x;
				bullets[i].y = location_y - 25;
				bullets[i].shootFlg = true;
				bulletsNum++;
				break;
			}
		}
	}

	if (chara == ENEMY) {
		for (int i = ONEWAY_PLAYER_BULLET_NUM; i < ONEWAY_ENEMY_BULLET_NUM; i++) {
			if (bullets[i].shootFlg == false) {
				bullets[i].speed = BULLET_SPPED;
				bullets[i].x = location_x;
				bullets[i].y = location_y + 25;
				bullets[i].shootFlg = true;
				bulletsNum++;
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