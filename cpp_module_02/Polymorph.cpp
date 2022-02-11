#include "Polymorph.hpp"

Polymorph::Polymorph() : ASpell("Polymorph", "burnt to a crisp"){}

Polymorph::~Polymorph(){}

ASpell *Polymorph::clone() const
{
	return new Polymorph();
} 