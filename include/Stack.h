#pragma once
#include "Shape.h"


class Stack :public Shape
{
public:
	Stack(std::shared_ptr<Shape>, std::shared_ptr<Shape>);

	void print(double);
	const void draw(double);
	void enlarge(int num);
	void reduce(int num);
	std::string getName()const;
	double getShapeSize()const;
	double getFactor()const;
	
	
private:
	std::shared_ptr<Shape> m_shape_ptr1;
	std::shared_ptr<Shape> m_shape_ptr2;
	int m_size1; 
	int m_size2; 
	double m_factor;

};