#pragma once
#include "SphereCollider.h"

class Bullet :public SphereCollider
{
private:
	int damage;
	float speed;
	float angle;
	float acceleration;
	float angulVelocity;
public:
	/*
	* �����@�F�Ȃ�
	* �߂�l�F�Ȃ�
	* �`��ȊO�̍X�V����������
	*/
	void Update();

	/*
	* �����@�F�Ȃ�
	* �߂�l�F�Ȃ�
	* �`��̍X�V����������
	*/
	void Draw();

	/*
	* �����@�F�Ȃ�
	* �߂�l�F�Ȃ�
	* �_���[�W��^����
	*/
	void GetDamage();
};

