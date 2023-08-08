#pragma once
#include "CharaBase.h"
#include "GameMain.h"

class Enemy :public CharaBase
{
private:
	int hp;
	int point;
	
public:
	/*
	* �����@�FGameMain�̃|�C���^���󂯎��
	* �߂�l�F�Ȃ�
	* �`��ȊO�̍X�V����������
	*/
	void Update(GameMain* gameMain) override;

	/*
	* �����@�F
	* �߂�l�F
	* 
	*/
	void Draw() override;

	/*
	* �����@�F
	* �߂�l�F
	* 
	*/
	void Hit(int damage) override;
};

