#pragma once
#include "Shape.h"


class Square :public Shape
{
public:
	Square(std::string, double);

	void print(double);
	void enlarge(int num);
	void reduce(int num);
	const void draw(double m_factor);
	std::string getName()const;
	double getShapeSize()const;
	double getFactor()const;

	
private:
	double m_size;
	double m_factor = 1;

};

