#pragma once
class Vector
{
public:
	int x;
	int y;
	int z;

	Vector();
	Vector(int iX, int iY, int iZ);
	float magnitude();

	Vector cross(Vector const& obj);

	Vector operator+(Vector const& obj);
	Vector operator-(Vector const& obj);
	Vector operator*(Vector const& obj);


};

