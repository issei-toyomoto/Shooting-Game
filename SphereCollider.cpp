#include "SphereCollider.h"
#include <math.h>

int SphereCollider::CheckCollision(SphereCollider sphereCollider)
{
	//三平方の定理で円と円の中心からの距離を計算
	float x = location_x - sphereCollider.location_x;
	float y = location_y - sphereCollider.location_y;
	float a = sqrtf(x * x + y * y);

	//距離が二つの円の半径の和なら当たった
	if (a <= radius + sphereCollider.radius) {
		return TOUCH;//当たった
	}
	else {
		return NO_TOUCH;//当たってない
	}
}