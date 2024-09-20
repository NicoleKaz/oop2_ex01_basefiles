#pragma once
#include "Shape.h"


class Triangle :public Shape
{
public:
	Triangle(std::string, double);

	void print(double);
	void enlarge(int num);
	void reduce(int num);
	const void draw(double);
	std::string getName()const;
	double getShapeSize()const;
	double getFactor()const;

	
private:
	double m_size; 
	double m_factor = 1;

};

