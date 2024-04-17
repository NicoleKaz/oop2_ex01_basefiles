#include "Square.h"

// Constructor for Square class
Square::Square(std::string, double size)
{
    m_name = "Square";
    m_size = size;
}

// Print function for Square class
// Inputs: Factor to scale the printed size (factor)
// Outputs: Prints a representation of the square with scaled dimensions
void Square::print(double factor)
{
    std::cout << m_name << "(" << m_size * factor << ")";
}

// Enlarge function for Square class
// Inputs: Number by which to enlarge the square (enl_num)
// Actions: Enlarges the square by scaling its size by the specified factor
void Square::enlarge(int enl_num)
{
    if (enl_num > 0 && enl_num < 11)
    {
        m_size = m_size * enl_num;
    }
}

// Reduce function for Square class
// Inputs: Number by which to reduce the square (red_num)
// Actions: Reduces the square by scaling its size by the specified factor
void Square::reduce(int red_num)
{
    if (red_num > 0 && red_num < 11)
    {
        m_size = m_size / red_num;
    }
}

// Draw function for Square class
// Inputs: Factor to scale the drawn square (factor)
// Actions: Draws the square with scaled dimensions
void Square::draw(double factor)
{
    // Printing the top row
    for (int i = 0; i < round(m_size * factor); ++i) {
        std::cout << "* ";
    }
    std::cout << std::endl;

    // Printing the middle rows
    for (int i = 0; i < round(m_size * factor - 2); ++i) {
        std::cout << "*";
        if (m_size == static_cast<int>(m_size))
        {
            for (int j = 0; j < m_size * factor * 2 - 3; ++j) {
                std::cout << " ";
            }
            std::cout << "*" << std::endl;
        }
        else
        {
            for (int j = 0; j < m_size * factor * 2 - 2; ++j) {
                std::cout << " ";
            }
            std::cout << "*" << std::endl;
        }
    }

    // Printing the bottom row
    for (int i = 0; i < round(m_size * factor); ++i) {
        std::cout << "* ";
    }
    std::cout << std::endl;

}

// Get name function for Square class
// Outputs: Returns the name of the square (m_name)
std::string Square::getName()const
{
    return m_name;
}

// Get shape size function for Square class
// Outputs: Returns the size of the square (m_size)
double Square::getShapeSize()const
{
    return m_size;
}

// Get factor function for Square class
// Outputs: Returns the enlargement factor for the square (m_factor) 
double Square::getFactor()const
{
    return m_factor;
}
