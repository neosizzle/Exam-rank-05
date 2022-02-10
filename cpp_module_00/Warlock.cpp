#include "Warlock.hpp"

std::string Warlock::getName() const
{
	return this->_name;
}

std::string Warlock::getTitle() const
{
	return this->_title;
}

void Warlock::setName(std::string name)
{
	this->_name = name;
}

void Warlock::setTitle(std::string title)
{
	this->_title = title;
}


void	Warlock::introduce(void) const
{
	std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << " !\n";
}

Warlock::~Warlock()
{
	std::cout << this->_name << ": My job here is done!\n";
}

Warlock::Warlock(std::string name, std::string title)
{
	this->_name = name;
	this->_title = title;
	std::cout << name << ": This looks like another boring day.\n";
}