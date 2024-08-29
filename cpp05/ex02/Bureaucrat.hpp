#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#define BESTGRADE 1
#define WORSTGRADE 150

class Bureaucrat;

#include <string>
#include <iostream>
#include "AForm.hpp"

class Bureaucrat
{
	public:
			Bureaucrat();
			Bureaucrat(std::string name, int grade);
			Bureaucrat(const Bureaucrat& input);
			~Bureaucrat();
			Bureaucrat& operator=(const Bureaucrat& input);
			std::string			getName() const;
			int					getGrade() const;
			void				decrement(void);
			void				increment(void);
			void				signForm(AForm &);
			class 				GradeTooHighException: public std::exception
			{
				public:
				    	const char *what() const throw();

			};
			class 				GradeTooLowException: public std::exception
			{
				public:
						const char *what() const throw();
			};
	private:
		const std::string	_name;
		int					_grade;
};

std::ostream&	operator<<(std::ostream &o, const Bureaucrat& bureaucrat);

#endif