#pragma once
#include "CharaBase.h"
#include "GameMain.h"

class Player :public CharaBase
{
private:
	int score;
	int weapon;
public:
	/*
	* �����@�FGameMain�̃|�C���^���󂯎��
	* �߂�l�F�Ȃ�
	* �`��ȊO�̍X�V����������
	*/
	void Update(GameMain* gameMain)override;

	/*
	* �����@�F�Ȃ�
	* �߂�l�F�Ȃ�
	*�`��̍X�V����������
	*/
	void Draw()override;

	/*
	* �����@�Fdamage�Ń_���[�W���󂯎��
	* �߂�l�F�Ȃ�
	* �_���[�W���󂯂��Ƃ��̏���
	*/
	void Hit(int damage)override;
};