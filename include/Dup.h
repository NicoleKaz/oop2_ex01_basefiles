#pragma once
#include <iostream>
#include <string>
#include "Shape.h"
#include "Rectangle.h"

class Dup :public Shape
{
public:
	Dup(std::shared_ptr<Shape>, int);

	void print();
	void printComplex(double);
	void draw();
	void enlarge(int num);
	void reduce(int num);
	std::string getName();
	int getShapeSize();


private:
	std::shared_ptr<Shape> m_shape_ptr;
	int m_times;
	int m_size; 
	double m_factor;
	std::string m_str_rec ;
	
};