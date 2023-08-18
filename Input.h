#pragma once
#include "DxLib.h"

class Input
{
public:
	static int key_flg;
	static int now_key;
	static int old_key;

	static int x_buf;
	static int y_buf;

	static int x_flg;
	static int x_now;
	static int x_old;

	static int y_flg;
	static int y_now;
	static int y_old;

public:
	//コンストラクタ
	Input () 
	{

	}

	static void Update();
	/*
	* 引数　：int型
	* 戻り値：int型
	* 押している間、戻り値を返す
	*/
	static int Getkey(int key);
	/*
	* 引数　：int型
	* 戻り値：int型
	* 押した瞬間、戻り値を返す
	*/
	static int GetKeyDown(int key);

	/*
	* 引数　：なし
	* 戻り値：int型
	* ジョイスティックX軸方向に倒している間、倒している方向の戻り値を返す
	* 例：右→（1～1000）　左→（-1～-1000）
	*/
	static int GetJoyStickX();
	/*
	* 引数　：なし
	* 戻り値：int型
	* ジョイスティックY軸方向に倒している間、倒している方向の戻り値を返す
	* 例：下→（1～1000）　上→（-1～-1000）
	*/
	static int GetJoyStickY();
};

