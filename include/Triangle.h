#pragma once
#include "Shape.h"

class Triangle :public Shape
{
public:
	Triangle(std::string, int);

	void print();
	void printComplex(double);
	void enlarge(int num);
	void reduce(int num);
	void draw();
	std::string getName();
	int getShapeSize();
	

private:
	int m_size; 
};

