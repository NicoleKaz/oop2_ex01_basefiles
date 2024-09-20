#include "Rectangle.h"

// Constructor for Rectangle class
Rectangle::Rectangle(std::string, double size, double rec_height)
{
    m_name = "Rectangle";
    m_size = size;
    m_height = rec_height;
}

// Print function for Rectangle class
// Inputs: Factor to scale the printed size (factor)
// Outputs: Prints a representation of the rectangle with scaled dimensions
void Rectangle::print(double factor)
{
    std::cout << m_name << "(w: " << m_size * factor << "," << "h: " << m_height * factor << ")";
}

// Enlarge function for Rectangle class
// Inputs: Number by which to enlarge the rectangle (enl_num)
// Actions: Enlarges the rectangle by scaling its width and height by the specified factor
void Rectangle::enlarge(int enl_num)
{
    if (enl_num > 0 && enl_num < 11)
    {
        m_size = m_size * enl_num;
        m_height = m_height * enl_num;
    }
}

// Reduce function for Rectangle class
// Inputs: Number by which to reduce the rectangle (red_num)
// Actions: Reduces the rectangle by scaling its width and height by the specified factor
void Rectangle::reduce(int red_num)
{
    if (red_num > 0 && red_num < 11)
    {
        m_size = m_size / red_num;
        m_height = m_height / red_num;
    }
}

// Draw function for Rectangle class
// Inputs: Factor to scale the drawn rectangle (factor)
// Actions: Draws the rectangle with scaled dimensions
const void Rectangle::draw(double factor)
{
    // Printing the top row
    for (int i = 0; i < round(m_size*factor); ++i) {
        std::cout << "* ";
    }
    std::cout << std::endl;

    // Printing the middle rows
    for (int i = 0; i < round(m_height*factor - 2); ++i) {
        std::cout << "*";
        for (int j = 0; j < round(factor*m_size * 2 - 3); ++j) {
            std::cout << " ";
        }
        std::cout << "*" << std::endl;
    }

    // Printing the bottom row
    for (int i = 0; i < round(m_size * factor); ++i) {
        std::cout << "* ";
    }
    std::cout << std::endl;

}

// Get name function for Rectangle class
// Outputs: Returns the name of the rectangle (m_name)
std::string Rectangle::getName()const
{
    return m_name;
}

// Get shape size function for Rectangle class
// Outputs: Returns the width of the rectangle (m_size)
double Rectangle::getShapeSize()const
{
    return m_size;
}

// Get factor function for Rectangle class
// Outputs: Returns the enlargement factor for the rectangle (m_factor) 
double Rectangle::getFactor()const
{
    return m_factor;
}

// Get shape height function for Rectangle class
// Outputs: Returns the height of the rectangle (m_height)
int Rectangle::getShapeHeight()const
{
    return m_height;
}