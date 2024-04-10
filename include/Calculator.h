#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Shape.h"

const int USRCOM_SIZE = 9;
enum userComand{ CRE, EN, RED, DRAW, DUP, STACK, DEL, HELP, EXIT };

class Calculator
{
public:
	Calculator();
	void start();
	void printMenu();
	void drawShape();

private:
	std::string m_userComand[USRCOM_SIZE] = { "cre", "en", "red" , "dup" , "stack" , "del", "help" , "exit"};
	char m_shape;
	int m_size;
	int m_rechigh;
	int m_location;
	int comand_num;

	std::vector <std::shared_ptr <Shape> > m_shapeObject;
	
};