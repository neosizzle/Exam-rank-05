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

void	Warlock::learnSpell(ASpell *spell)
{
	std::pair<std::string, ASpell *> pair;

	pair = std::make_pair(spell->getName(), spell->clone());
	this->spells.insert(pair);
}

void	Warlock::forgetSpell(std::string spell_str)
{
	ASpell *spell = this->spells[spell_str];

	if (spell)
		delete spell;
	this->spells.erase(spell_str);
}

void	Warlock::launchSpell(std::string spell_str, ATarget &target)
{
	ASpell *spell = this->spells[spell_str];

	if (spell)
		spell->launch(target);
}