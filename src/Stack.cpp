#include "Stack.h"

// Constructor for Stack class
Stack::Stack(std::shared_ptr<Shape> shared_ptr1, std::shared_ptr<Shape> shared_ptr2)
	:m_shape_ptr1(shared_ptr1), m_shape_ptr2(shared_ptr2)
{
	m_size1 = m_shape_ptr1->getShapeSize();
	m_size2 = m_shape_ptr2->getShapeSize();
	m_factor = 1; 
}

// Print function for Stack class
// Inputs: Factor to scale the printed sizes (factor)
// Outputs: Prints a representation of the stacked shapes, including their sizes
void Stack::print(double factor)
{
	std::cout << "(";
	m_shape_ptr1->print(factor);
	std::cout << " / ";
	m_shape_ptr2->print(factor);
	std::cout << ")";
}

// Draw function for Stack class
// Inputs: Factor to scale the drawn shapes (factor)
// Actions: Draws the stacked shapes with scaled dimension
void Stack::draw(double m_factor)
{
	m_shape_ptr1->draw(m_factor);
	m_shape_ptr2->draw(m_factor);
}

// Enlarge function for Stack class
// Inputs: Number by which to enlarge the stack (num)
// Actions: Updates the enlargement factor for the stack
void Stack::enlarge(int num)
{
	m_factor *=  num;
}

// Reduce function for Stack class
// Inputs: Number by which to reduce the stack (num)
// Actions: Updates the reduction factor for the stack
void Stack::reduce(int num)
{
	m_factor /= num;
}

// Get name function for Stack class
// Outputs: Returns an empty string (no meaningful name for a stack)
std::string Stack::getName()const
{
	return std::string();
}

// Get shape size function for Stack class
// Outputs: Returns 0 (no meaningful size for a stack)
double Stack::getShapeSize()const
{
	return 0;
}

// Get factor function for Stack class
// Outputs: Returns the enlargement factor for the stack (m_factor)
double Stack::getFactor()const
{
	return m_factor;
}





