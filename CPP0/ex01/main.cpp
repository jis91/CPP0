#include "PhoneBook.hpp"
#include "utils.hpp"
#include <iostream>


int main(void)
{
	PhoneBook book;
	std::string line;
	std::cout << "Hello and welcome to the PhoneBook ! Here are the commands you can use :" << std::endl << std::endl;
	std::cout << "ADD to save a contact" << std::endl;
	std::cout << "SEARCH to display one" << std::endl;
	std::cout << "EXIT to quit" << std::endl << std::endl;
	std::cout << "You will need to add a first contact before being able to search. Ctrl-D at any time quits the program" << std::endl;
	while (true)
	{
		if (!readInput("<PhoneBook>", line))
		{
			std::cout << std::endl;
			break;
		}
		if (line == "ADD")
		{
			if (!book.addContact())
			{
				std::cout << std::endl;
				break;
			}
		}
		else if (line == "SEARCH")
		{
			if (!book.search())
			{
				std::cout << std::endl;
				break;
			}
		}
		else if (line == "EXIT")
			break;
	}
	return (0);
}