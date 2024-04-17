#include "Triangle.h"

Triangle::Triangle(std::string, int size)
{
    m_name = "Triangle";
    m_size = size;
}

void Triangle::print()
{
    std::cout << m_name << "(" << m_size << ")";
}

void Triangle::printComplex(double factor)
{
    int new_size = m_size * factor;
    std::cout << factor << " !!! ";
    std::cout << m_name << "(" << new_size  << ")";
}

void Triangle::enlarge(int enl_num)
{
    if (enl_num > 0 && enl_num < 11)
    {
        m_size = m_size * enl_num;
    }
}

void Triangle::reduce(int red_num)
{
    if (red_num > 0 && red_num < 11)
    {
        m_size = m_size / red_num;
    }
}

void Triangle::draw()
{
    // Printing the equilateral triangle without asterisks inside
    for (int i = 1; i <= m_size; ++i)
    {
        // Printing spaces to align the triangle correctly
        for (int j = 1; j <= m_size - i; ++j)
        {
            std::cout << " ";
        }
        // Printing asterisks only for the first and last rows,
        // otherwise printing asterisk only for the first and last columns
        for (int k = 1; k <= i; ++k)
        {
            if (k == 1 || k == i || i == m_size)
                std::cout << "* ";
            else
                std::cout << "  ";
        }
        std::cout << std::endl;
    }
}

std::string Triangle::getName()
{
    return m_name;
}

int Triangle::getShapeSize()
{
    return m_size;
}



