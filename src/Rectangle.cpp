#include "Rectangle.h"

Rectangle::Rectangle(std::string, int size, int rec_height)
{
    m_name = "Rectangle";
    m_size = size;
    m_height = rec_height;
}

void Rectangle::print()
{
    std::cout << m_name << "(w:" << m_size << "," << "h:" << m_height << ")";
}

void Rectangle::printComplex(double factor)
{
    std::cout << m_name << "(w: " << m_size * factor << "," << "h: " << m_height * factor << ")";
}

void Rectangle::enlarge(int enl_num)
{
    if (enl_num > 0 && enl_num < 11)
    {
        m_size = m_size * enl_num;
        m_height = m_height * enl_num;
    }
}

void Rectangle::reduce(int red_num)
{
    if (red_num > 0 && red_num < 11)
    {
        m_size = m_size / red_num;
        m_height = m_height / red_num;
    }
}

void Rectangle::draw()
{
    // Printing the top row
    for (int i = 0; i < m_size; ++i) {
        std::cout << "* ";
    }
    std::cout << std::endl;

    // Printing the middle rows
    for (int i = 0; i < m_height - 2; ++i) {
        std::cout << "*";
        for (int j = 0; j < m_size * 2 - 3; ++j) {
            std::cout << " ";
        }
        std::cout << "*" << std::endl;
    }

    // Printing the bottom row
    for (int i = 0; i < m_size; ++i) {
        std::cout << "* ";
    }
    std::cout << std::endl;

}

std::string Rectangle::getName()
{
    return m_name;
}

int Rectangle::getShapeSize()
{
    return m_size;
}

int Rectangle::getShapeHeight()
{
    return m_height;
}