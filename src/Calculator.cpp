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
				m_shapeObject.push_back(std::make_shared<Triangle>("t", m_size));
				break;
			}
			case 'r': //rectangel
			{
				//m_shapeObject.push_back(std::make_shared<Rectangle>("r", m_size));
				break;
			}
			case 's': //squer
			{
				//m_shapeObject.push_back(std::make_shared<Square>("s", m_size));
				break;
			}
			}
			break;
		}
		case EN:
		{
			std::cin >> m_location;
			int enlarge_num;
			std::cin >> enlarge_num;
			m_shapeObject.at(m_location)->enlarge(enlarge_num);
			break;
		}
		case RED:
		{
			std::cin >> m_location;
			int reduce_num;
			std::cin >> reduce_num;
			m_shapeObject.at(m_location)->reduce(reduce_num);
			break;
		}
		case DRAW:
		{
			std::cin >> m_location;
			m_shapeObject.at(m_location)->draw();
			break;
		}
		case DUP:
		{
			int shpe_to_dup, dup_num;
			std::cin >> shpe_to_dup;
			std::cin >> dup_num;
			m_shapeObject.at(shpe_to_dup)->duplicate(dup_num);
			//m_shapeObject.push_back(std::make_shared<Shape>);
			break;
		}
		case STACK:
		{
			break;
		}
		case DEL:
		{
			std::cin >> m_location;
			
			break;
		}
		case HELP:
		{
			break;
		}
		case EXIT:
		{
			break;
		}
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

