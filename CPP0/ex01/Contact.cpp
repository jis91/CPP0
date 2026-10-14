#include "Contact.hpp"

Contact::Contact()
{
	return ;
}
Contact::~Contact()
{
	return;
}
Contact::Contact(const std::string &firstName, 
				const std::string &lastName, 
				const std::string &nickName, 
				const std::string &phone, 
				const std::string &secret) 
				: _firstname(firstName), 
				_lastname(lastName), 
				_nickname(nickName), 
				_phone(phone), 
				_secret(secret)
{
}
std::string Contact::getFirstname() const
{
	return _firstname;
}

std::string Contact::getLastname() const
{
	return _lastname;
}

std::string Contact::getNickname() const
{
	return _nickname;
}
std::string Contact::getPhone() const
{
	return _phone;
}
std::string Contact::getSecret() const
{
	return _secret;
}