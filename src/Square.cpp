#include "Square.h"

Square::Square(std::string, int size)
{
    m_name = "Square";
    m_size = size;
}

void Square::Operation(std::string str)
{
}

Square::~Square()
{
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

void Square::draw()
{
    // Printing the top row
    for (int i = 0; i < m_size; ++i) {
        std::cout << "* ";
    }
    std::cout << std::endl;

    // Printing the middle rows
    for (int i = 0; i < m_size - 2; ++i) {
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

void Square::duplicate(int num)
{

}

void Square::stack(int num1, int num2)
{

}

std::string Square::getName()
{
    return m_name;
}

int Square::getShapeSize()
{
    return m_size;
}

char Square::getChar()
{
    return 's';
}