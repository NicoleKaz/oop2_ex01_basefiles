#include "Triangle.h"
#include "Calculator.h"
#include <memory>

Calculator::Calculator()
{

}

void Calculator::start()
{
	while (1)
	{
		printMenu();
		std::string userInput;
		std::cin >> userInput;

		for (int i = CRE ; i <= EXIT; i++)
		{
			int result = m_userComand[i].compare(userInput);
			if (result == 0)
			{
			    m_comandNum = i; 
				break;
			}
		}

		
		switch(m_comandNum)
		{
		case CRE:
		{
			std::cin >> m_shape;
			std::cin >> m_size;
			switch (m_shape)
			{
			case 't': //triangel
			{
				m_shapeObject.push_back(std::make_shared<Triangle>("Triangle", m_size));
				break;
			}
			case 'r': //rectangel
			{
				std::cin >> m_rechigh;
				//m_shapeObject.push_back(std::make_shared<Rectangel>);
				break;
			}
			case 's': //squer
			{
				//m_shapeObject.push_back(std::make_shared<Squer>);
				break;
			}
			}
			printMenu();
		}
		case DRAW:
		{
			std::cin >> m_location;
			m_shapeObject.at(m_location)->draw();
			break;
		}
		case EN:
			;
		case RED:
			;

		case DUP:
			;
		case STACK:
			;
		case DEL:
			;
		case HELP:
			;
		case EXIT:
			;
		}

	}
}

void Calculator::printMenu()
{
	//only when the vector is empty
	if (m_shapeObject.empty())
	{
		std::cout << "Shape list is empty" << std::endl;
	}
	else
	{
		std::cout << "List of the available shapes:" << std::endl;
		int index = 0; 
		//print what the vector shpes countain
		for (auto& shape : m_shapeObject)
		{
			std::cout << index << ". "; 
			index++;
			shape->printName();
			shape->printSize();
		}
	}
	std::cout << "Enter command('help' for the list of available commands) : " << std::endl;
}

