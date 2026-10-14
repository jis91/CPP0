#ifndef UTILS_HPP
#define UTILS_HPP
#include <string>

bool	readInput(const std::string &prompt, std::string &line);
bool	readField(const std::string &prompt, std::string &line);
bool	readPhone(const std::string &prompt, std::string &line);
std::string				truncateText(const std::string &origin);
#endif