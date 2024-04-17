#include "Dup.h"

// Constructor for Dup class
Dup::Dup(std::shared_ptr<Shape> p2shape, int dup_times)
	:m_shape_ptr(p2shape), m_times(dup_times)
{
	m_size = m_shape_ptr->getShapeSize();
	m_factor = 1;
}

// Print function for Dup class
// Outputs: Prints a representation of the duplicated shape, 
// including the number of duplications and the original shape
void Dup::print(double factor)
{
	std::cout << m_times << " * (";
	m_shape_ptr->print(factor);
	std::cout << ")";
}

// Draw function for Dup class
// Inputs: Factor to scale the duplication (factor)
// Actions: Draws the duplicated shape the specified number of times
void Dup::draw(double factor)
{
	for (int i = 0; i < m_times; i++)
	{
		m_shape_ptr->draw(factor);
	}
}

// Enlarge function for Dup class
// Inputs: Number by which to enlarge the duplication (num)
// Actions: Updates the enlargement factor for the duplication
void Dup::enlarge(int num)
{

	m_factor *= num; 

}

// Reduce function for Dup class
// Inputs: Number by which to reduce the duplication (num)
// Actions: Updates the reduction factor for the duplication
void Dup::reduce(int num)
{
	m_factor /= num;
}

// Get name function for Dup class
// Outputs: Returns the name of the duplication (always an empty string in this case)
std::string Dup::getName()const
{
	return std::string();
}

// Get shape size function for Dup class
// Outputs: Returns the number of duplications (m_times)
double Dup::getShapeSize()const
{
	return m_times;
}

// Get factor function for Dup class
// Outputs: Returns the enlargement factor for the duplication (m_factor)
double Dup::getFactor()const
{
	return m_factor;
}

