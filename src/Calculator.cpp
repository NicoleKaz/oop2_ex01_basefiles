#include "Calculator.h"

Calculator::Calculator
{

}

void Calculator::start()
{
	while (1)
	{
		printMenu();
		str:string userInput;
		std::getline(std::cin, userInput);

		for (int i = CRE ; i <= EXIT, i++)
		{
			if (strcmp(m_userComand[i], userInput) == 0)
			{
				int comand_num = i; 
				break;
			}
		}

		
		switch(userComand)
		{
		case CRE:
		{
			std::cin >> m_shape;
			std::cin >> m_size;
			if (m_shape == 'r')
			{
				std::cin >> m_rechigh;
			}
			////////////////////////////////////////////////////
				switch(m_shape)
				case 't': //triangel
				{
					m_shapeObject.push_back(std::make_unique<Triangel>);
					//m_shapeObject.back();
					break;
				}
				case 'r': //rectangel
				{
					m_shapeObject.push_back(std::make_unique<Rectangel>);
					break;
				}
				case 's': //squer
				{
					m_shapeObject.push_back(std::make_unique<Squer>);
					break;
				}
			////////////////////////////////////////////////////////
			printMenu();
		}
		case EN:
			;
		case RED:
			;
		case DRAW:
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
		//print what the vector shpes countain
		for (auto& shape : m_shapeObject)
		{
			std::cout << "List of the available shapes:" << std::endl; 
			//change for the name and the location
		}
			
	}
	std::cout << "Enter command('help' for the list of available commands) : " << std::endl;
}

;;;;;;;;;;;;;;;;;;;
