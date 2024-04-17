#include "Stack.h"

Stack::Stack(std::shared_ptr<Shape> shared_ptr1, std::shared_ptr<Shape> shared_ptr2)
	:m_shape_ptr1(shared_ptr1), m_shape_ptr2(shared_ptr2)
{
	m_size1 = m_shape_ptr1->getShapeSize();
	m_size2 = m_shape_ptr2->getShapeSize();
	m_factor = 1; 
}

void Stack::print()
{
	std::cout << "(";
	printComplex(m_factor);
	std::cout << ")";
}

void Stack::printComplex(double)
{
	m_shape_ptr1->printComplex(m_factor);
	std::cout << " / ";
	m_shape_ptr2->printComplex(m_factor);
}

void Stack::draw()
{
	m_shape_ptr1->draw();
	m_shape_ptr2->draw();
}

void Stack::enlarge(int num)
{
	m_factor =  num;
}

void Stack::reduce(int num)
{
	m_factor = num;
}

std::string Stack::getName()
{
	return std::string();
}

int Stack::getShapeSize()
{
	return 0;
}




