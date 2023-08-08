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
	//�R���X�g���N�^
	Input () 
	{

	}

	static void Update();
	/*
	* �����@�Fint�^
	* �߂�l�Fint�^
	* �����Ă���ԁA�߂�l��Ԃ�
	*/
	static int Getkey(int key);
	/*
	* �����@�Fint�^
	* �߂�l�Fint�^
	* �������u�ԁA�߂�l��Ԃ�
	*/
	static int GetKeyDown(int key);

	/*
	* �����@�F�Ȃ�
	* �߂�l�Fint�^
	* �W���C�X�e�B�b�NX�������ɓ|���Ă���ԁA�|���Ă�������̖߂�l��Ԃ�
	* ��F�E���i1�`1000�j�@�����i-1�`-1000�j
	*/
	static int GetJoyStickX();
	/*
	* �����@�F�Ȃ�
	* �߂�l�Fint�^
	* �W���C�X�e�B�b�NY�������ɓ|���Ă���ԁA�|���Ă�������̖߂�l��Ԃ�
	* ��F�����i1�`1000�j�@�と�i-1�`-1000�j
	*/
	static int GetJoyStickY();
};

