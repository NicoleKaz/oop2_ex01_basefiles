#pragma once
#include "Shape.h"

class Rectangle :public Shape
{
public:
	Rectangle(std::string, int, int);

	void print();
	void enlarge(int num);
	void reduce(int num);
	void draw();

	std::string getName();
	int getShapeSize();
	int getRecH();

private:
	int m_size;
	int m_height;
};

