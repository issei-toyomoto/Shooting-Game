#pragma once
/*********************************************************************/
//親クラス→なし
//継承クラス→(CharaBase.h Bullet.h)
// 
//円形でプレイヤー、敵、弾の当たり判定を取り継承先に当たったかどうか
//を返す
/*********************************************************************/
#define NO_TOUCH 0 //当たってない
#define TOUCH    1 //当たった

//円形の当たり判定
//これを継承して当たり判定を作る
class SphereCollider 
{
private:

protected:
	float location_x;	//中心座標X
	float location_y;	//中心座標Y
	float radius;		//半径
	
public:

	/*
	* 引数　：SpherColliderを受け取る
	* 戻り値：SpherCollider同士の当たり判定を行い当たったかどうかを返す
	* 　　　　(0:当たってない 1:当たった)
	* 円形で当たり判定を行う
	* 二つの円の中心から距離を測り、その距離が二つの円の半径の和以下ならば当たり、半径の和よりも大きければ当たっていない
	*/
	virtual int CheckCollision(SphereCollider sphereCollider);
};