#pragma once
#include "Shape.h"


class Rectangle: public Shape
{
public:
	Rectangle(std::string, double, double);

	void print(double);
	void enlarge(int num);
	void reduce(int num);
	const void draw(double);
	double getShapeSize()const;
	double getFactor()const;
	std::string getName()const;

	int getShapeHeight()const;


private:
	double m_size,
	       m_height;
	double m_factor= 1;

};

