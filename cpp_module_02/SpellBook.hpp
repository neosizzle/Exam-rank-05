#pragma once
#include <map>
#include "ASpell.hpp"
class SpellBook
{
	private:
		SpellBook(const SpellBook &other);
		SpellBook &operator=(const SpellBook &rhs);
		std::map<std::string, ASpell *> spells;

	public:
		SpellBook();
		~SpellBook();

		void learnSpell(ASpell* spell);
		void forgetSpell(std::string const & spell_str);
		ASpell* createSpell(std::string const & spell_str);

};