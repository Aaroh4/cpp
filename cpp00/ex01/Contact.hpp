/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 15:41:29 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/24 12:59:39 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
	public:
		Contact();
		~Contact();
		std::string get_fname(void) const;
		std::string get_lname(void) const;
		std::string get_nname(void) const;
		std::string get_secret(void) const;
		int			get_number(void) const;
		bool		get_exists(void) const;
		void 		set_fname(std::string input);
		void		resize_fname(int size);
		void		set_lname(std::string input);
		void		resize_lname(int size);
		void		set_nname(std::string input);
		void		resize_nname(int size);
		void		set_secret(std::string input);
		void		set_number(int input);
		void		set_exists(bool input);
	private:
		std::string fname;
		std::string lname;
		std::string nname;
		std::string secret;
		int 		number;
		bool		exists;
};

#endif