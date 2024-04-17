#pragma once
#include "Shape.h"

class Rectangle: public Shape
{
public:
	Rectangle(std::string, double, double);

	void print();
	void printComplex(double);
	void enlarge(int num);
	void reduce(int num);
	void draw(double);
	std::string getName();
	double getShapeSize();
	double getFactor();


	int getShapeHeight();

private:
	double m_size,
	       m_height;
	double m_factor= 1;
};

