#pragma once

//�~�`�̓����蔻��
//������p�����ē����蔻������
class SphereCollider 
{
private:
	float location;
	float radius;
public:
	//�����@�FSpherCollider���󂯎��
	//�߂�l�FSpherCollider���m�̓����蔻����s�������������ǂ�����Ԃ�
	//�~�`�œ����蔻����s��
	virtual int CheckCollision(SphereCollider collision);
};