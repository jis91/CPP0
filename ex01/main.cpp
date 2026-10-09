#include "PhoneBook.hpp"
#include "utils.hpp"
#include <iostream>


int main(void)
{
	PhoneBook book;
	std::string line;
	while (true)
	{
		if (!readInput(">", line))
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
}