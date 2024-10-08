#include "Vector.h"
#include <math.h>

Vector::Vector() {
	x = 0;
	y = 0;
	z = 0;
}

Vector::Vector(int iX, int iY, int iZ)
{
	x = iX;
	y = iY;
	z = iZ;
}

float Vector::magnitude()
{
	return sqrt(x*x+y*y+z*z);
}

Vector Vector::operator+(Vector const& obj)
{
	Vector res;
	res.x = x + obj.x;
	res.y = y + obj.y;
	res.z = z + obj.z;
	return res;
}

Vector Vector::operator-(Vector const& obj)
{
	Vector res;
	res.x = x - obj.x;
	res.y = y - obj.y;
	res.z = z - obj.z;
	return res;
}

Vector Vector::operator*(Vector const& obj)//cross product
{
	Vector res;
	res.x = y * obj.z - z * obj.y;
	res.y = z * obj.x - x * obj.z;
	res.z = x * obj.y - y * obj.x;
	return res;
}
