#pragma once
#include "AbstractScene.h"
#include "Common.h"

#define CURSOR_X_DIFF 15
#define CURSOR_Y_DIFF 10

class TitleScene :public AbstractScene
{
private:
	int cursorX;
	int cursorY;

	int nowMenuCnt;
	bool menuFlg;
protected:

public:
	//�R���X�g���N�^
	TitleScene();
	//�f�X�g���N�^
	virtual ~TitleScene();

	//�`��ȊO�̍X�V����������
	virtual AbstractScene* Update() override;

	//�`��Ɋւ��邱�Ƃ���������
	virtual void Draw() const  override;
};

