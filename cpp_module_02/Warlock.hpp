#ifndef __WARLOCK__H__
#define __WARLOCK__H__
#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"
//constr
//destr
//copy
//asignment 
class Warlock
{
	private :
		std::string _name;
		std::string	_title;
		SpellBook *_spellbook;

		Warlock();
		Warlock(Warlock const &warlock);

		Warlock &operator=(const Warlock &rhs);


	public :
		Warlock(std::string name, std::string title);
		~Warlock();

		std::string	getName() const;
		std::string	getTitle() const;

		void	setName(std::string name);
		void	setTitle(std::string title);
		void	introduce() const;

		void	learnSpell(ASpell *spell);
		void	forgetSpell(std::string spell_str);
		void	launchSpell(std::string spell_str, ATarget &target);
};

#endif  //!__WARLOCK__H__