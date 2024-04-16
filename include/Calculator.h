#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "Shape.h"
#include "Triangle.h"
#include "Square.h"
#include "Rectangle.h"
#include "Dup.h"
#include "Stack.h"


const int USRCOM_SIZE = 9;
enum userComand { CRE, EN, RED, DRAW, DUP, STACK, DEL, HELP, EXIT };

class Calculator
{
public:
	Calculator();
	void start();
	void printMenu();
	void printHelp();

private:
	std::string m_userComand[USRCOM_SIZE] = { "cre", "en", "red", "draw", "dup", "stack", "del", "help", "exit" };
	char m_shape;
	int m_size;
	int m_rechigh;
	int m_location;
	int m_comandNum;

	std::vector <std::shared_ptr <Shape> > m_shapeObject;

};