#include "utils.hpp"
#include <iostream> // for cout and cin

bool readInput(const std::string &prompt, std::string &line)
{
	std::cout << prompt;
	if (!std::getline(std::cin, line))
		return false;
	return true;
}

bool readField(const std::string &prompt, std::string &line)
{
	while (true)
	{
		if (!readInput(prompt, line))
			return false;
		if (line.find_first_not_of(" \t") == std::string::npos)
			std::cout << "Empty field is not accepted" << std::endl;
		else
			return true;

	}
}

bool isValidPhone(const std::string &phone)
{
	if (phone.find_first_not_of("0123456789") != std::string::npos)
		return false;
	return true;
}

bool readPhone(const std::string &prompt, std::string &line)
{
	while (true)
	{
		if (!readField(prompt, line))
			return false;
		if (isValidPhone(line))
			return true;
		else 
			std::cout << "Phone number should only be digits !" << std::endl;
	}
}
std::string truncateText(const std::string &origin)
{
	if (origin.length() > 10)
		return origin.substr(0, 9) + '.';
	return origin;
}