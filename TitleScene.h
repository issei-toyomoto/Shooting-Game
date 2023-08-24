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
	//コンストラクタ
	TitleScene();
	//デストラクタ
	virtual ~TitleScene();

	//描画以外の更新を実装する
	virtual AbstractScene* Update() override;

	//描画に関することを実装する
	virtual void Draw() const  override;
};

