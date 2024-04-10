#pragma once
#include <iostream>
#include <string>

class Shape
{
public:
	Shape();
	//virtual ~Shape() = default;
	void printName() const;
	void printSize() const;
	virtual void Operation(std::string str) = 0;
	
	virtual void enlarge(int num) = 0;
	virtual void reduce(int num) = 0;
	virtual void draw() = 0;
	virtual void duplicate(int num) = 0;
	virtual void stack(int num1, int num2) = 0;
	virtual void deleteShape(int num) = 0;

	


protected:
	std::string(m_name);
	int m_size; 

};