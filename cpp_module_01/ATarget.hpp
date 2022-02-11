#ifndef __ATARGET__H__
#define __ATARGET__H__

#include <iostream>
class ASpell;
class ATarget
{
	private:
		std::string _type;

	public:
		ATarget();
		ATarget(std::string type) : _type(type){};
		ATarget(const ATarget &other);
		ATarget &operator=(const ATarget &rhs);

		std::string const &getType() const;
		virtual ATarget *clone() const = 0;
		void	getHitBySpell(const ASpell &spell) const;
};
#include "ASpell.hpp"

#endif