#include "Square.h"

Square::Square(std::string, double size)
{
    m_name = "Square";
    m_size = size;
}

void Square::print()
{
    std::cout << m_name << "(" << m_size << ")";
}

void Square::printComplex(double factor)
{
    std::cout << m_name << "(" << m_size * factor << ")";
}

void Square::enlarge(int enl_num)
{
    if (enl_num > 0 && enl_num < 11)
    {
        m_size = m_size * enl_num;
    }
}

void Square::reduce(int red_num)
{
    if (red_num > 0 && red_num < 11)
    {
        m_size = m_size / red_num;
    }
}

void Square::draw(double factor)
{
    // Printing the top row
    for (int i = 0; i < m_size * factor; ++i) {
        std::cout << "* ";
    }
    std::cout << std::endl;

    // Printing the middle rows
    for (int i = 0; i < m_size * factor - 2; ++i) {
        std::cout << "*";
        for (int j = 0; j < m_size * factor * 2 - 3; ++j) {
            std::cout << " ";
        }
        std::cout << "*" << std::endl;
    }

    // Printing the bottom row
    for (int i = 0; i < m_size * factor; ++i) {
        std::cout << "* ";
    }
    std::cout << std::endl;

}

std::string Square::getName()
{
    return m_name;
}

double Square::getShapeSize()
{
    return m_size;
}

double Square::getFactor()
{
    return m_factor;
}
