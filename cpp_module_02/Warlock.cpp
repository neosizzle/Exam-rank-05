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
	delete this->_spellbook;
}

Warlock::Warlock(std::string name, std::string title)
{
	this->_name = name;
	this->_title = title;
	this->_spellbook = new SpellBook();
	std::cout << name << ": This looks like another boring day.\n";
}

void	Warlock::learnSpell(ASpell *spell)
{
	this->_spellbook->learnSpell(spell);
}

void	Warlock::forgetSpell(std::string spell_str)
{
	this->_spellbook->forgetSpell(spell_str);
}

void	Warlock::launchSpell(std::string spell_str, ATarget &target)
{
	ASpell *spell = this->_spellbook->createSpell(spell_str);

	if (spell)
		spell->launch(target);
}