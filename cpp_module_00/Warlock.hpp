#ifndef __WARLOCK__H__
#define __WARLOCK__H__
#include <iostream>

//constr
//destr
//copy
//asignment 
class Warlock
{
	private :
		std::string _name;
		std::string	_title;

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
};

#endif  //!__WARLOCK__H__