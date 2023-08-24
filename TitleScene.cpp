#include "TitleScene.h"
#include "GameMainScene.h"
#include "Input.h"

#define DEBUG

TitleScene::TitleScene()
{
	cursorX = 520;
	cursorY = 315;

	nowMenuCnt = 0;
	menuFlg = false;
}

TitleScene::~TitleScene()
{
	SetFontSize(16);
}

AbstractScene* TitleScene::Update()
{
	Input::Update();//入力更新

	//カーソル下方向
	if (Input::GetJoyStickY() > 0 && nowMenuCnt < 2 && menuFlg == false) {
		cursorY = cursorY + 60;
		nowMenuCnt++;
		menuFlg = true;
	}
	else if (Input::GetJoyStickY() > 0 && nowMenuCnt >= 2 && menuFlg == false) {
		cursorY = 315;
		nowMenuCnt = 0;
		menuFlg = true;
	}
	//カーソル上方向
	if (Input::GetJoyStickY() < 0 && nowMenuCnt > 0 && menuFlg == false) {
		cursorY = cursorY - 60;
		nowMenuCnt--;
		menuFlg = true;
	}
	else if (Input::GetJoyStickY() < 0 && nowMenuCnt <= 0 && menuFlg == false) {
		cursorY = 435;
		nowMenuCnt = 2;
		menuFlg = true;
	}

	if (Input::GetJoyStickY() == 0) {
		menuFlg = false;
	}

	if (Input::GetKeyDown(PAD_INPUT_B) == TRUE && nowMenuCnt == 0) {//カーソルが"GameStart"でBボタンを押したらゲームメインシーンへ
		return new GameMainScene;
	}
	else if (Input::GetKeyDown(PAD_INPUT_B) == TRUE && nowMenuCnt == 1) {

	}
	else if (Input::GetKeyDown(PAD_INPUT_B) == TRUE && nowMenuCnt == 2) {
		return nullptr;
	}

	return this;
}

void TitleScene::Draw() const
{
	//タイトル
	SetFontSize(64);
	DrawFormatString(400, 20, C_GREEN, "Shooting Game");

	//メニューフォントサイズ変更
	SetFontSize(32);
	//メニュー表示
	DrawFormatString(530, 300, C_WHITE, "Game Start");
	DrawFormatString(550, 360, C_WHITE, "Ranking");
	DrawFormatString(590, 420, C_WHITE, "End");

	//カーソル表示
	DrawTriangle(cursorX, cursorY, cursorX - CURSOR_X_DIFF, cursorY - CURSOR_Y_DIFF, cursorX - CURSOR_X_DIFF, cursorY + CURSOR_Y_DIFF, C_RED, TRUE);

#ifdef DEBUG
	SetFontSize(16);
	DrawFormatString(0, 0, C_WHITE, "menuCnt %d", nowMenuCnt);
#endif // DEBUG

}
