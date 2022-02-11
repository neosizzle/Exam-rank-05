#ifndef __DUMMY__H__
#define __DUMMY__H__
#include "ATarget.hpp"
class Dummy : public ATarget
{
	public :
		Dummy();
		~Dummy();
		ATarget *clone() const;
};

#endif