#pragma once
#include "Shape.h"

class Rectangle: public Shape
{
public:
	Rectangle(std::string, int, int);

	void print();
	void printComplex(double);
	void enlarge(int num);
	void reduce(int num);
	void draw();
	std::string getName();
	int getShapeSize();

	int getShapeHeight();

private:
	int m_size;
	int m_height;
};

