#include "Rectangle.h"

Rectangle::Rectangle(std::string, int size, int rec_height)
{
    m_name = "Rectangle";
    m_size = size;
    m_height = rec_height;
}

void Rectangle::Operation(std::string str)
{
}

Rectangle::~Rectangle()
{
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

void Rectangle::duplicate(int num)
{

}

void Rectangle::stack(int num1, int num2)
{

}

std::string Rectangle::getName()
{
    return m_name;
}

int Rectangle::getShapeSize()
{
    return m_size;
} 

char Rectangle::getChar()
{
    return 'r';
} 

int Rectangle::getRecH()
{
    return m_height;
}