#include "ATarget.hpp"

ATarget::ATarget()
{

}

ATarget::~ATarget()
{

}

ATarget::ATarget(const ATarget &other)
{
	*this = other;
}

ATarget &ATarget::operator=(const ATarget &rhs)
{
	this->_type = rhs._type;
	return *this;
}

std::string const &ATarget::getType() const
{
	return this->_type;
}

void	ATarget::getHitBySpell(const ASpell &spell) const
{
	std::cout << this->_type << " has been " << spell.getEffects()<< "!\n";
}