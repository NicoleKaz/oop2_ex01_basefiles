#include <iostream>
#include <string>

const int USRCOM_SIZE = 9;
enum userComand{ CRE, EN, RED, DRAW, DUP, STACK, DEL, HELP, EXIT };

Class Calculator
{
public:

private:
	string m_userComand[USRCOM_SIZE] = { "cre", "en", "red" , "dup" , "stack" , "del", "help" , "exit"};
	char m_shape;
	int m_size;
	int m_rechigh;
	///share_ptr ?????????????????
	std::vector<std::unique_ptr<Shape>> m_shapeObject;
};