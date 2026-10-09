#include "PhoneBook.hpp"
#include "utils.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>

PhoneBook::PhoneBook():  _numberOfContacts(0), _nextIndex(0)
{
	return;
}
PhoneBook::~PhoneBook()
{
	return;
}

bool PhoneBook::addContact()
{
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phone;
	std::string secret;
	if (!readField("Enter Firstname :", firstName))
		return false;
	if (!readField("Enter Lastname :", lastName))
		return false;
	if (!readField("Enter Nickname :", nickName))
		return false;
	if (!readField("Enter Phone number :", phone))
		return false;
	if (!readField("Enter your darkest secret :", secret))
		return false;
	Contact newContact(firstName, lastName, nickName, phone, secret);
	_contacts[_nextIndex] = newContact; 
	if (_numberOfContacts < _maxContacts)
		_numberOfContacts++;
	if (_nextIndex >= _maxContacts - 1)
		_nextIndex = 0;
	else
		_nextIndex++;
	return true;
}

bool PhoneBook::search()
{
	if (_numberOfContacts == 0)
	{
		std::cout << "PhoneBook is empty, add contact first" << std::endl;
		return true;
	}
	displayPhonebook();

	while (true)
	{
		std::string	line;
		std::string rest;
		int index = -1;
		if (!readInput(">PhoneBook> Type index number to display full contact informations : ", line))
			return false;
		std::stringstream ss(line);
		if (!(ss >> index))
		{
			std::cout << "Invalid input, not a number" << std::endl;
			continue;
		}
		if (ss >> rest)
		{
			std::cout << "Invalid input, trailing characters left" << std::endl;
			continue;
		}
		if (index < 1 || index > _numberOfContacts)
		{
			std::cout << "Invalid input, index out of range" << std::endl;
			continue;
		}
		displayContact(index - 1);
		break;
	}
	return true;
}

void PhoneBook::displayPhonebook() const
{
	std::cout << std::setw(10) << std::right << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nick Name" << std::endl;
	for (int i=0; i < _numberOfContacts; i++)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << truncateText(_contacts[i].getFirstname()) << "|";
		std::cout << std::setw(10) << truncateText(_contacts[i].getLastname()) << "|";
		std::cout << std::setw(10) << truncateText(_contacts[i].getNickname()) << std::endl;
	}
}

void PhoneBook::displayContact(int index) const
{
	std::cout << "First Name : " << _contacts[index].getFirstname() << std::endl;
	std::cout << "Last Name : " << _contacts[index].getLastname() << std::endl;
	std::cout << "Nick Name : " << _contacts[index].getNickname() << std::endl;
	std::cout << "Phone number : " << _contacts[index].getPhone() << std::endl;
	std::cout << "Darkest secret : " << _contacts[index].getSecret() << std::endl;
}