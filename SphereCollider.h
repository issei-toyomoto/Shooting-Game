#pragma once

//円形の当たり判定
//これを継承して当たり判定を作る
class SphereCollider 
{
private:
	float location;	//中心座標
	float radius;	//半径
public:
	/*
	* 引数　：SpherColliderを受け取る
	* 戻り値：SpherCollider同士の当たり判定を行い当たったかどうかを返す
	* 　　　　(0:当たってない 1:プレイヤーと敵が当たった　2:プレイヤーと弾が当たった 3:敵と弾が当たった 4:敵と敵が当たった)
	* 円形で当たり判定を行う
	*/
	virtual int CheckCollision(SphereCollider collision);
};