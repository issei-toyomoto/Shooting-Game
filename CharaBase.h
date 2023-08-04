#pragma once
#include "SphereCollider.h"
#include "GameMain.h"

class CharaBase :public SphereCollider 
{
private:
	float speed;
	float image;
public:
	/*
	* �����@�FGameMain�̃|�C���^
	* �߂�l�F�Ȃ�
	* �`��ȊO�̍X�V����������
	*/
	virtual void Update(GameMain* GameMain);

	/*
	* �����@�F�Ȃ�
	* �߂�l�F�Ȃ�
	* �`��̍X�V����������
	*/
	virtual void Draw();

	/*
	* �����@�Fdamage�Ń_���[�W���󂯎��
	* �߂�l�F�Ȃ�
	* �_���[�W���󂯂��Ƃ��̏���
	*/
	virtual void Hit(int damage);
};