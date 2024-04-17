#pragma once
#include <iostream>
#include <string>


// Abstract base class for shapes
class Shape
{
public:
	// Virtual destructor
	virtual ~Shape() {}
	// Virtual functions to be implemented by derived classes
	virtual void print(double) = 0; 
	virtual void enlarge(int) = 0;
	virtual void reduce(int) = 0;
	virtual void draw(double) = 0;
	virtual double getFactor()const = 0;
	virtual std::string getName() const = 0; 
	virtual double getShapeSize() const = 0;
	

protected:
	std::string(m_name);// Name of the shape

};