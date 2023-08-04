#pragma once

//円形の当たり判定
//これを継承して当たり判定を作る
class SphereCollider 
{
private:
	float location;
	float radius;
public:
	//引数　：SpherColliderを受け取る
	//戻り値：SpherCollider同士の当たり判定を行い当たったかどうかを返す
	//円形で当たり判定を行う
	virtual int CheckCollision(SphereCollider collision);
};