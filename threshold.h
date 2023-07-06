#pragma once

#include <neural-graphics-primitives/common.h>
#include <neural-graphics-primitives/common_device.cuh>
#include <neural-graphics-primitives/triangle.cuh>
#include<neural-graphics-primitives/bounding_box.cuh>


NGP_NAMESPACE_BEGIN
struct ThreshBox{
		struct BoundingBox aabb;
		float thresh;

		ThreshBox(struct BoundingBox aabb, float thresh){};
};

NGP_NAMESPACE_END