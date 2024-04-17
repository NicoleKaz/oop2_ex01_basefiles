#pragma once
#include <iostream>
#include <string>
#include "Shape.h"
#include "Rectangle.h"


class Dup :public Shape
{
public:
	Dup(std::shared_ptr<Shape>, int);

	void print(double);
	void draw(double);
	void enlarge(int num);
	void reduce(int num);
	std::string getName()const;
	double getShapeSize()const;
	double getFactor()const;


private:
	std::shared_ptr<Shape> m_shape_ptr;
	int m_times;
	int m_size; 
	double m_factor;
	std::string m_str_rec ;
	
};