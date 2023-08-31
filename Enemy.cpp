#include "Enemy.h"
#include "DxLib.h"
#include "Common.h"
#include "GameMainScene.h"

Enemy::Enemy() 
{
	drawFlg = false;			//描画用変数
	location_x = 40;			//X軸の位置
	location_y = 20;			//Y軸の位置

	positionNum = GetRand(31);	//出現するレーンの選定
	if (positionNum == 0) {		//０の場合は１を格納
		positionNum = 1;
	}

	radius = ENEMY_RADIUS;					//敵の半径
	location_x = location_x * positionNum;	//レーンの位置をX軸に反映
	hp = 5;									//敵のHP
	point = 100;							//倒した時のポイント

	drawCnt = 0;				//描画までの時間をカウント用変数の初期化
	drawCntTmp = GetRand(5);	//描画までの時間を選定
	if (drawCntTmp == 0) {		//０秒
		drawCntNum = 1;
	}
	else if (drawCntTmp == 1) {	//５秒
		drawCntNum = 5 * 60;
	}
	else if (drawCntTmp == 2) {	//１０秒
		drawCntNum = 10 * 60;
	}
	else if (drawCntTmp == 3) {	//１５秒
		drawCntNum = 15 * 60;
	}
	else if (drawCntTmp == 4) {	//２０秒
		drawCntNum = 20 * 60;
	}
	else if (drawCntTmp == 5) {	//２５秒
		drawCntNum = 25 * 60;
	}
}

void Enemy::Update(GameMainScene* gameMain)
{
	//カウント用//
	shootCnt++;
	drawCnt++;
	//・・・・・//

	if (drawCnt == drawCntNum) {//描画する時間がきたら描画する
		drawFlg = true;
	}

	if (shootCnt % 40 == 0 && hp >= 0 && drawFlg == true) {//弾の生成（４０フレームに１回）
		gameMain->SpawnBullet(location_x, location_y, ENEMY);
	}
	
	if (drawFlg == true) {//描画されていたらY軸の移動が可能
		Y();
		location_y += vectorY;
	}
	
	if (location_y >= _SCREEN_HEIGHT_) {//画面下まで移動したら描画しない
		drawFlg = false;
	}

	//・・・・カウント用の変数を０に・・・・//
	if (shootCnt > 60) {//１秒たったらカウントを０にする
		shootCnt = 0;
	}
	if (drawCnt == 30 * 60) {
		drawCnt = 0;
	}
	//・・・・・・・・・・・・・・・・・・・//
}

void Enemy::Draw() const
{
	if (hp >= 0 && drawFlg == true) {
		DrawCircle((int)location_x, (int)location_y, (int)radius, C_GREEN, TRUE);
	}
}

void Enemy::Hit(int damage)
{

}

void Enemy::X() 
{

}

void Enemy::Y() 
{
	vectorY = 0.3f;
}

float Enemy::GetX() 
{
	float x = location_x;
	return x;
}

float Enemy::GetY() 
{
	float y = location_y;
	return y;
}
