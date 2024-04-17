#include "Calculator.h"


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

		for (int i = CRE; i <= EXIT; i++)
		{
			int result = m_userComand[i].compare(userInput);
			if (result == 0)
			{
				m_comandNum = i;
				break;
			}
		}


		switch (m_comandNum)
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
				int rec_height;
				std::cin >> rec_height;
				m_shapeObject.push_back(std::make_shared<Rectangle>("r", m_size, rec_height));
				break;
			}
			case 's': //squer
			{
				m_shapeObject.push_back(std::make_shared<Square>("s", m_size));
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
			if (enlarge_num > 0 && enlarge_num < 11)
			{
				m_shapeObject.at(m_location)->enlarge(enlarge_num);
			}
			break;
		}
		case RED:
		{
			std::cin >> m_location;
			int reduce_num;
			std::cin >> reduce_num;
			if (reduce_num > 0 && reduce_num < 11)
			{
				m_shapeObject.at(m_location)->reduce(reduce_num);
			}
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
			if (dup_num <= 0)
			{
				std::cout << "Error in duplication number, needs to be positive!\n";
				break;
			}
			///////////////////////////////////////////
			//std::shared_ptr <Shape> ptr = m_shapeObject[shpe_to_dup];
			//m_shapeObject.push_back(std::make_shared<Dup>(ptr, dup_num));
			
			m_shapeObject.push_back(std::make_shared<Dup>(m_shapeObject.at(shpe_to_dup), dup_num));
			break;
		}
		case STACK:
		{
			int shape1, shape2;
			std::cin >> shape1;
			std::cin >> shape2;
			///////////////////////////////////////////
			//std::shared_ptr <Shape> ptr1 = m_shapeObject[shape1];
			//std::shared_ptr <Shape> ptr2 = m_shapeObject[shape2];
			//m_shapeObject.push_back(std::make_shared<Stack>(ptr1, ptr2));
			m_shapeObject.push_back(std::make_shared<Stack>(m_shapeObject.at(shape1), (m_shapeObject.at(shape2))));
			break;
		}
		case DEL:
		{
			std::cin >> m_location;
			if (m_location >= 0 && m_location < m_shapeObject.size())
			{
				m_shapeObject.erase(m_shapeObject.begin() + m_location);
			}
			break;
		}
		case HELP:
		{
			printHelp();
			break;
		}
		case EXIT:
		{
			std::cout << "Goodbye\n";
			exit(EXIT_SUCCESS);
		}
		}

	}
}

void Calculator::printHelp()
{

	std::cout << "The available commands are :\n"
		"*cre(ate shape) < t - triangle | r - rectangle | s - square > x[y] -\n"
		"create new shape according to the chosen letter, with the given\n"
		"size(s) (y must be given only for a rectangle)\n"
		"* en(large) num n - enlarge the size of the sides of shape #num by n\n"
		"(1 - 10)\n"
		"* red(uce) num n - reduce the size of the sides of shape #num by n\n"
		"(1 - 10)\n"
		"* draw num - draw shape #num\n"
		"* dup(licate) num n - create a new shape which is a n times\n"
		"(vertical) duplication of shape #num\n"
		"* stack num1 num2 - create a new shape by stacking shape number #num1\n"
		"over shape number #num2\n"
		"* del(ete) num - delete shape #num from the shape list\n"
		"* help - print this command list\n"
		"* exit - exit the program\n" << std::endl;

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
			shape->print();
			std::cout << std::endl;
		}
	}
	std::cout << "Enter command('help' for the list of available commands) : " << std::endl;
}

