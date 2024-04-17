#pragma once
#include "Shape.h"

class Triangle :public Shape
{
public:
	Triangle(std::string, double);

	void print();
	void printComplex(double);
	void enlarge(int num);
	void reduce(int num);
	void draw(double);
	std::string getName();
	double getShapeSize();
	double getFactor();

	

private:
	double m_size; 
	double m_factor = 1;

};

