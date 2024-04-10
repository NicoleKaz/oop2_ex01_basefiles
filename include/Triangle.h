#pragma once
#include<string>
#include "Shape.h"

class Triangle :public Shape
{
public:
	Triangle(std::string, int);
	void Operation(std::string str);
	~Triangle();

    void enlarge(int num) = 0;
	void reduce(int num) = 0;
	void draw() = 0;
	void duplicate(int num) = 0;
	void stack(int num1, int num2) = 0;
	void deleteShape(int num) = 0;

	std::string getName();
	int getShapeSize();

private:
	 
};

