#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>

class Bureaucrat
{
	public:
			Bureaucrat();
			const std::string	getName();
			int					getGrade();
			void				decrement(int num);
			void				increment(int num);
	private:
		const std::string	name;
		int					grade;
};

std::ostream&	operator<<(std::ostream &o, const Bureaucrat& bureaucrat);

#endif