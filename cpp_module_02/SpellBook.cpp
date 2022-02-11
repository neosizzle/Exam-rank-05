#include "SpellBook.hpp"

SpellBook::SpellBook()
{

}

SpellBook::~SpellBook()
{
	std::map <std::string, ASpell *>::iterator iter;

	iter = this->spells.begin();
	while(iter != this->spells.end())
	{
		if (iter->second)
			delete iter->second;
		++iter;
	}
	this->spells.clear();
}

void	SpellBook::learnSpell(ASpell* spell)
{
	std::pair<std::string, ASpell *> pair;

	pair = std::make_pair(spell->getName(), spell->clone());
	this->spells.insert(pair);
}

void SpellBook::forgetSpell(std::string const & spell_str)
{
	ASpell * spell = this->spells[spell_str];
	if (spell)
		delete spell;
	this->spells.erase(spell_str);
}

ASpell* SpellBook::createSpell(std::string const & spell_str)
{
	std::map<std::string, ASpell *>::iterator it = this->spells.find(spell_str);

    if (it != this->spells.end())
        return this->spells[spell_str];
    return NULL;
}