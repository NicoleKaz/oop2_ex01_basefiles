#include "Stack.h"

Stack::Stack(std::shared_ptr<Shape> shared_ptr1, std::shared_ptr<Shape> shared_ptr2)
	:m_shape_ptr1(shared_ptr1), m_shape_ptr2(shared_ptr2)
{
	m_size1 = m_shape_ptr1->getShapeSize();
	m_size2 = m_shape_ptr2->getShapeSize();
}

void Stack::print()
{
	std::cout << "(";
	m_shape_ptr1->print();
	std::cout << " / ";
	m_shape_ptr2->print();
	std::cout << ")";
}

void Stack::draw()
{
	m_shape_ptr1->draw();
	m_shape_ptr2->draw();
}

void Stack::enlarge(int num)
{
	m_size1 = m_size1 * num; 
	m_size2 = m_size2 * num; 
}

void Stack::reduce(int num)
{
	//m_shape_ptr1->reduce(num);
	//m_shape_ptr2->reduce(num);
	m_size1 = m_size1 / num;
	m_size2 = m_size2 / num;
}

std::string Stack::getName()
{
	return std::string();
}

int Stack::getShapeSize()
{
	return 0;
}


