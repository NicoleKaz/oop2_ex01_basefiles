#pragma once
#include<string>
#include "Shape.h"

class Triangle :public Shape
{
public:
	Triangle(std::string, int);
	void Operation(std::string str);
	~Triangle();

    void enlarge(int num) ;
	void reduce(int num) ;
	void draw() ;
	void duplicate(int num) ;
	void stack(int num1, int num2);
	void deleteShape(int num) ;

	std::string getName();
	int getShapeSize();

private:
	 
};

