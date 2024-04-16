#include "Dup.h"


Dup::Dup(std::shared_ptr<Shape> p2shape, int dup_times)
	:m_shape_ptr(p2shape), m_times(dup_times)
{
	m_size = m_shape_ptr->getShapeSize();
}

void Dup::print()
{
	std::cout << m_times << " * (";
	m_shape_ptr->print();
	std::cout << ")";
}

void Dup::draw()
{
	for (int i = 0; i < m_times; i++)
	{
		m_shape_ptr->draw();
	}
}

void Dup::enlarge(int num)
{
	m_size = m_size * num; 
}

void Dup::reduce(int num)
{
	m_size = m_size / num;
}

std::string Dup::getName()
{
	return std::string();
}

int Dup::getShapeSize()
{
	return m_times;
}
