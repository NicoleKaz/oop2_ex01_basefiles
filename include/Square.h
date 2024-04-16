#pragma once
#include "Shape.h"

class Square :public Shape
{
public:
	Square(std::string, int);

	void print();
	void enlarge(int num);
	void reduce(int num);
	void draw();

	std::string getName();
	int getShapeSize();

private:
	int m_size;

};

