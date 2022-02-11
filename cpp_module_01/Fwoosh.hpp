#ifndef __FWOOSH__H__
#define __FWOOSH__H__

#include "ASpell.hpp"
class Fwoosh : public ASpell
{
	public :
		Fwoosh();
		~Fwoosh();

		virtual ASpell *clone() const;
};

#endif