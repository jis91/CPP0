#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>

class Contact
{
	private:
		std::string _firstname;
		std::string _lastname;
		std::string _nickname;
		std::string _phone;
		std::string _secret;
	public:
		Contact();
		~Contact();
		Contact(const std::string &firstName, 
				const std::string &lastName, 
				const std::string &nickName, 
				const std::string &phone, 
				const std::string &secret);
		std::string getFirstname() const;
		std::string getLastname() const;
		std::string getNickname() const;
		std::string getPhone() const;
		std::string getSecret() const;
		
};
#endif