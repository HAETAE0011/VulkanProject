#ifndef UNIFORMBUFFEROBJECT_H
#define UNIFORMBUFFEROBJECT_H
#include "Matrix.h"
using namespace MATH;
struct UniformBufferObject {
	Matrix4 projection;
	Matrix4 view;
	Matrix4 model;
};
#endif
