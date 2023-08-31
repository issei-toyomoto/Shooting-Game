#pragma once
#include"DxLib.h"

//画面サイズ
#define _SCREEN_HEIGHT_ 720	//縦
#define _SCREEN_WIDHT_	1280//横

//色
#define C_RED   GetColor(255,0,0)		//赤
#define C_GREEN GetColor(0,255,0)		//緑
#define C_BLUE  GetColor(0,0,255)		//青
#define C_BLACK GetColor(0,0,0)			//黒
#define C_WHITE GetColor(255,255,255)	//白

//プレイヤー
#define PLAYER 1			//GameMainSceneにあるSpawnBullet関数に使うマクロ
#define PLAYER_SPEED 3.0f	//プレイヤーのスピード
#define PLAYER_RADIUS 15.0f	//プレイヤーの半径

//敵
#define ENEMY 0				//GameMainSceneにあるSpawnBullet関数に使うマクロ
#define MAX_ENEMY_NUM 25	//敵の最大数
#define ENEMY_SPEED 2.0f	//敵のスピード
#define ENEMY_RADIUS 15.0f	//敵の半径

//弾
#define MAX_BULLET_NUM 30000						//弾の最大数
#define ONEWAY_PLAYER_BULLET_NUM 20					//プレイヤーの１Wayの弾の数
#define ONEWAY_ENEMY_BULLET_NUM (MAX_ENEMY_NUM * 5)	//敵の１Wayの弾の数
#define BULLET_SPPED (PLAYER_SPEED + 3.0f)			//弾のスピード
#define BULLET_RADIUS 5.0f							//弾の半径