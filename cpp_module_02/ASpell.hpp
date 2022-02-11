#ifndef __ASPELL__H__
#define __ASPELL__H__
#include <iostream>

class ATarget;
class ASpell
{
	protected :
		std::string _name;
		std::string _effects;

	public :
		virtual ~ASpell();
		ASpell();
		ASpell(std::string name, std::string effects): _name(name), _effects(effects){};
		ASpell(const ASpell &other);
		ASpell &operator=(const ASpell &rhs);

		std::string getName() const;
		std::string getEffects() const;
		void	launch(const ATarget &target) const;

		virtual ASpell *clone() const = 0;

};
#include "ATarget.hpp"

#endif //__ASPELL__H__