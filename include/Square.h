#pragma once
#include "Shape.h"

class Square :public Shape
{
public:
	Square(std::string, double);

	void print();
	void printComplex(double);
	void enlarge(int num);
	void reduce(int num);
	void draw(double m_factor);
	std::string getName();
	double getShapeSize();
	double getFactor();

	

private:
	double m_size;
	double m_factor = 1;

};

