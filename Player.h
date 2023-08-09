#pragma once
#include "CharaBase.h"
#include "GameMainScene.h"

class Player :public CharaBase
{
private:
	int score;//���݂̃X�R�A
	int weapon;//

	float x;
	float y;
	float vectorX;
	float vectorY;

public:
	//�R���X�g���N�^
	Player();

	/*
	* �����@�FGameMain�̃|�C���^���󂯎��
	* �߂�l�F�Ȃ�
	* �`��ȊO�̍X�V����������
	*/
	void Update(GameMainScene* gameMain)override;

	/*
	* �����@�F�Ȃ�
	* �߂�l�F�Ȃ�
	*�`��̍X�V����������
	*/
	void Draw() const override;

	/*
	* �����@�Fdamage�Ń_���[�W���󂯎��
	* �߂�l�F�Ȃ�
	* �_���[�W���󂯂��Ƃ��̏���
	*/
	void Hit(int damage)override;

	/*
	* �����@�F�Ȃ�
	* �߂�l�F�Ȃ�
	* X���̏���
	*/
	void X();

	/*
	* �����@�F�Ȃ�
	* �߂�l�F�Ȃ�
	* Y���̏���
	*/
	void Y();
};