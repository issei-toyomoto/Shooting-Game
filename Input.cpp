#include "Input.h"

int Input::key_flg;
int Input::now_key;
int Input::old_key;

int Input::x_buf;
int Input::y_buf;

int Input::x_flg;
int Input::x_now;
int Input::x_old;

bool Input::y_flg;
int Input::y_now;
int Input::y_old;

void Input::Update() 
{
	old_key = now_key;
	now_key = GetJoypadInputState(DX_INPUT_KEY_PAD1);
	key_flg = now_key & ~old_key;

	GetJoypadAnalogInput(&x_buf, &y_buf, DX_INPUT_KEY_PAD1);
	y_flg = false;
}

//ボタン入力
int Input::Getkey(int key) 
{
	if (now_key & key) {
		return TRUE;
	}
	return FALSE;
}

int Input::GetKeyDown(int key) 
{
	if (key_flg & key) {
		return TRUE;
	}
	return FALSE;
}

//ジョイスティックX軸
int Input::GetJoyStickX() 
{
	return x_buf;
}
//ジョイスティックY軸
int Input::GetJoyStickY() 
{
	return y_buf;
}