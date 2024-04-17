#pragma once
#include <iostream>
#include <string>

class Shape
{
public:
	virtual void print() = 0;
	virtual void printComplex(double) = 0; 
	virtual void enlarge(int) = 0;
	virtual void reduce(int) = 0;
	virtual void draw(double) = 0;
	virtual double getFactor() = 0;


	virtual std::string getName() = 0; //const
	virtual double getShapeSize() = 0;//const
	

protected:
	std::string(m_name);

};