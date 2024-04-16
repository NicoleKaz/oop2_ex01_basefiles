#pragma once
#include <iostream>
#include <string>

class Shape
{
public:
	virtual void print() = 0;
	virtual void enlarge(int) = 0;
	virtual void reduce(int) = 0;
	virtual void draw() = 0;
	virtual std::string getName() = 0;
	virtual int getShapeSize() = 0;

protected:
	std::string(m_name);

};