#pragma once
#include "CharaBase.h"
#include "GameMainScene.h"

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
	void Update(/*GameMainScene* gameMain*/) override;

	/*
	* �����@�F
	* �߂�l�F
	* 
	*/
	void Draw() const override;

	/*
	* �����@�F
	* �߂�l�F
	* 
	*/
	void Hit(int damage) override;
};

