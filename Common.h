#pragma once
#include"DxLib.h"

//画面サイズ
#define _SCREEN_HEIGHT_ 720		//縦
#define _SCREEN_WIDHT_	1280	//横

//色
#define C_RED   GetColor(255,0,0)		//赤
#define C_GREEN GetColor(0,255,0)		//緑
#define C_BLUE  GetColor(0,0,255)		//青
#define C_BLACK GetColor(0,0,0)			//黒
#define C_WHITE GetColor(255,255,255)	//白

//プレイヤー
#define PLAYER 1
#define PLAYER_SPEED 3.0f
#define PLAYER_RADIUS 15.0f
#define PLAYER_BULLET_SPAWN_WAY 3

//敵
#define ENEMY 0
#define MAX_ENEMY_NUM 50

//弾
#define MAX_BULLET_NUM 1000000
#define ONEWAY_BULLET_NUM 20
#define BULLET_SPPED (PLAYER_SPEED + 3.0f)
#define BULLET_RADIUS 5.0f