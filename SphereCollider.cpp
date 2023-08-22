#include "SphereCollider.h"

int SphereCollider::CheckCollision(SphereCollider sphereCollider)
{
	//三平方の定理で円と円の中心からの距離を計算
	float x = location_x - sphereCollider.location_x;
	float y = location_y - sphereCollider.location_y;
	float tmp = x * x + y * y;
	float a = tmp / 2;

	//距離が二つの円の半径の和なら当たった
	if (a <= radius + sphereCollider.radius) {
		return TOUCH;//当たった
	}
	else {
		return NO_TOUCH;//当たってない
	}
}