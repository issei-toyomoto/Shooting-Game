#include "GameMainScene.h"
#include "NwaySpawner.h"

#define DEBUG

//コンストラクタ
GameMainScene::GameMainScene()
{
	//bullets = nullptr;
	life = 1;
	frameCnt = 0;
}

//デストラクタ
GameMainScene::~GameMainScene() 
{
	delete[]enemy;
	delete[]bullets;
}

//描画以外
AbstractScene* GameMainScene::Update()
{
	frameCnt++;


	player.Update(this);
	for (int i = 0; i < MAX_ENEMY_NUM; i++) {
		enemy[i].Update(this);
	}
	for (int i = 0; i < MAX_BULLET_NUM; i++) {
		bullets[i].Update();
	}
	HitCheck();


	if (frameCnt >= 180) {
		frameCnt = 0;
	}

	return this;
}

//描画
void GameMainScene::Draw() const
{
	player.Draw();
	for (int i = 0; i < MAX_ENEMY_NUM; i++) {
		enemy[i].Draw();
	}
	for (int i = 0; i < MAX_BULLET_NUM; i++) {
		bullets[i].Draw();
	}

#ifdef DEBUG
	DrawFormatString(500, 500, C_RED, "bulletsNum %d", bulletsNum);
	DrawFormatString(500, 520, C_RED, "Hit %d", Hit);
	DrawFormatString(500, 540, C_RED, "FrameCnt %d", frameCnt);
#endif // DEBUG

}

//当たり判定のチェック処理
void GameMainScene::HitCheck()
{
	
	for (int i = 0; i < MAX_BULLET_NUM; i++) {
		if (bullets[i].shootFlg == true) {
			//弾と敵の当たり判定
			for (int j = 0; j < MAX_ENEMY_NUM; j++) {
				if (enemy[j].hp >= 0 && enemy[j].drawFlg == true && bullets[i].CheckCollision(enemy[j]) == 1) {
					bullets[i].shootFlg = false;
					enemy[j].hp--;

				}
			}

			//弾とプレイヤーの当たり判定
			if (bullets[i].CheckCollision(player) == 1) {
				bullets[i].shootFlg = false;
				Hit++;
				life--;
			}

			//弾と弾の当たり判定(未実装)
			if (bullets[i].shootFlg == true) {
				for (int j = 1; j < MAX_BULLET_NUM; j++) {
					if (bullets[i].CheckCollision(bullets[j]) == 1) {
						//bullets[i].shootFlg = false;
						//bullets[j].shootFlg = false;
					}
				}
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