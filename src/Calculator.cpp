#include "Calculator.h"

//constractor
Calculator::Calculator()
{
}

//This function drives the calculator program, displaying a menu, reading user input, 
//and executing corresponding actions based on predefined commands. 
//It manages shape creation, manipulation, and deletion, while also providing help 
//information and handling exit commands. This loop continues until the user chooses 
//to exit the program.
void Calculator::start()
{
	//main loop
	while (1)
	{
		printMenu();
		//command from the user 
		std::string userInput;
		std::cin >> userInput;

		//find the command number
		for (int i = CRE; i <= EXIT; i++)
		{
			int result = m_userComand[i].compare(userInput);
			if (result == 0)
			{
				m_comandNum = i;
				break;
			}
			else
			{
				m_comandNum = 10;
			}
		}
		//command switch case 
		switch (m_comandNum)
		{
		case CRE: //create the shape
		{
			//shape char
			std::cin >> m_shape;
			//shape size
			std::cin >> m_size;
			//shape switch case 
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
				//user rectangel height
				std::cin >> rec_height;
				m_shapeObject.push_back(std::make_shared<Rectangle>("r", m_size, rec_height));
				break;
			}
			case 's': //squer
			{
				m_shapeObject.push_back(std::make_shared<Square>("s", m_size));
				break;
			}
			default: //if the user makes an input error
			{
				std::cout << "Bad input try again!" << std::endl;
				break;
			}
			}
			break;
		}
		case EN: //enlarge the shape size
		{
			//the shape 
			std::cin >> m_location;
			int enlarge_num;
			//the number 
			std::cin >> enlarge_num;
			//Check that the number is correct
			if (enlarge_num > 0 && enlarge_num < 11)
			{
				m_shapeObject.at(m_location)->enlarge(enlarge_num);
			}
			break;
		}
		case RED: //reduce the shape size
		{
			//the shape 
			std::cin >> m_location;
			int reduce_num;
			//the number 
			std::cin >> reduce_num;
			//Check that the number is correct
			if (reduce_num > 0 && reduce_num < 11)
			{
				m_shapeObject.at(m_location)->reduce(reduce_num);
			}
			break;
		}
		case DRAW: //draw the shape
		{
			//the shape
			std::cin >> m_location;
			m_shapeObject.at(m_location)->draw(m_shapeObject.at(m_location)->getFactor());
			break;
		}
		case DUP: //duplicate the shape
		{
			int shpe_to_dup, dup_num;
			//the shape
			std::cin >> shpe_to_dup;
			//how many times make to duplicate
			std::cin >> dup_num;
			if (dup_num <= 0)
			{
				std::cout << "Error in duplication number, needs to be positive!\n";
				break;
			}		
			m_shapeObject.push_back(std::make_shared<Dup>(m_shapeObject.at(shpe_to_dup), dup_num));
			break;
		}
		case STACK: //A combination of two shapes
		{
			int shape1, shape2;
			//shape one
			std::cin >> shape1;
			//shape two
			std::cin >> shape2;
			m_shapeObject.push_back(std::make_shared<Stack>(m_shapeObject.at(shape1), (m_shapeObject.at(shape2))));
			break;
		}
		case DEL: //delete the shape
		{
			//the shape
			std::cin >> m_location;
			if (m_location >= 0 && m_location < m_shapeObject.size())
			{
				m_shapeObject.erase(m_shapeObject.begin() + m_location);
			}
			break;
		}
		case HELP: //help menu
		{
			printHelp();
			break;
		}
		case EXIT: //exit
		{
			std::cout << "Goodbye\n";
			exit(EXIT_SUCCESS);
		}
		case BAD: //bad input
		{
			std::cout << "Bad input try again!" << std::endl;
			break;
		}
		default:
		{
			std::cout << "Bad input try again!" << std::endl;
			break;
		}
		}

	}
}

//This function prints the help menu
const void Calculator::printHelp()
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

//This function prints the data about the available shapes that the user craeted  
const void Calculator::printMenu()
{
	//only when the vector is empty
	if (m_shapeObject.empty())
	{
		std::cout << "Shape list is empty" << std::endl;
	}
	//if the vector has shapes 
	else
	{
		std::cout << "List of the available shapes:" << std::endl;
		int index = 0;
		//print what the vector shpes countain
		for (auto& shape : m_shapeObject)
		{
			std::cout << index << ". ";
			index++;
			shape->print(shape->getFactor());
			std::cout << std::endl;
		}
	}
	std::cout << "Enter command('help' for the list of available commands) : " << std::endl;
}

