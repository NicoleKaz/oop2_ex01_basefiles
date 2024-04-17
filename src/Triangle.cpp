#include "Triangle.h"

// Constructor for Triangle class
Triangle::Triangle(std::string, double size)
{
    m_name = "Triangle";
    m_size = size;
}

// Print function for Triangle class
// Inputs: Factor to scale the printed size (factor)
// Outputs: Prints a representation of the triangle with scaled dimensions
void Triangle::print(double factor)
{
    std::cout << m_name << "(" << m_size * factor << ")";
}

// Enlarge function for Triangle class
// Inputs: Number by which to enlarge the triangle (enl_num)
// Actions: Enlarges the triangle by scaling its size by the specified factor
void Triangle::enlarge(int enl_num)
{
    if (enl_num > 0 && enl_num < 11)
    {
        m_size = m_size * enl_num;
    }
}

// Reduce function for Triangle class
// Inputs: Number by which to reduce the triangle (red_num)
// Actions: Reduces the triangle by scaling its size by the specified factor
void Triangle::reduce(int red_num)
{
    if (red_num > 0 && red_num < 11)
    {
        m_size = m_size / red_num;
    }
}

// Draw function for Triangle class
// Inputs: Factor to scale the drawn triangle (factor)
// Actions: Draws the equilateral triangle with scaled dimensions
void Triangle::draw(double factor)
{
    // Printing the equilateral triangle without asterisks inside
    for (int i = 1; i <= round(m_size * factor); ++i)
    {
        // Printing spaces to align the triangle correctly
        for (int j = 1; j <= round(m_size * factor - i); ++j)
        {
            std::cout << " ";
        }
        // Printing asterisks only for the first and last rows,
        // otherwise printing asterisk only for the first and last columns
        for (int k = 1; k <= i; ++k)
        {
            if (k == 1 || k == i || i == round(m_size * factor))
                std::cout << "* ";
            else
                std::cout << "  ";
        }
        std::cout << std::endl;
    }
}

// Get name function for Triangle class
// Outputs: Returns the name of the triangle (m_name)
std::string Triangle::getName()const
{
    return m_name;
}

// Get shape size function for Triangle class
// Outputs: Returns the size of the triangle (m_size)
double Triangle::getShapeSize()const
{
    return m_size;
}

// Get factor function for Triangle class
// Outputs: Returns the enlargement factor for the triangle (m_factor) 
double Triangle::getFactor()const
{
    return m_factor;
}



