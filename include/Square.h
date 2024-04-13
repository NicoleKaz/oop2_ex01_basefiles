#pragma once
#include<string>
#include "Shape.h"

class Square :public Shape
{
public:
	Square(std::string, int);
	void Operation(std::string str);
	~Square();

	void enlarge(int num);
	void reduce(int num);
	void draw();
	void duplicate(int num);
	void stack(int num1, int num2);

	std::string getName();
	int getShapeSize();
	char getChar();

private:

};

