#pragma once
#include<string>
#include "Shape.h"

class Rectangle :public Shape
{
public:
	Rectangle(std::string, int, int);
	void Operation(std::string str);
	~Rectangle();

	void enlarge(int num);
	void reduce(int num);
	void draw();
	void duplicate(int num);
	void stack(int num1, int num2);

	std::string getName();
	int getShapeSize();
	char getChar();
	int getRecH();

private:
	int m_height;
};

