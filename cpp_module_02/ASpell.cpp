#include "ASpell.hpp"

ASpell::ASpell()
{

}

ASpell::~ASpell()
{
	
}

ASpell::ASpell(const ASpell &other)
{
	*this = other;
}

ASpell & ASpell::operator=(const ASpell &rhs)
{
	this->_name = rhs._name;
	this->_effects = rhs._effects;
	return *this;
}

std::string ASpell::getEffects() const
{
	return this->_effects;
}

std::string ASpell::getName() const
{
	return this->_name;
}

void	ASpell::launch(const ATarget &target) const
{
	target.getHitBySpell(*this);
}