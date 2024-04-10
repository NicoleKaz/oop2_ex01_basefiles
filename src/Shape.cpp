#include "Shape.h"

Shape::Shape()
{
	m_size = 0; 
}

void Shape::printSize() const
{
	std::cout << "(" << m_size << ")" << std::endl;
}

void Shape::printName() const
{
	std::cout << m_name << " ";
}



