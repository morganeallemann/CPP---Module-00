/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/01/04 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "iostream"
#include <string>

class Contact
{
	private:
		std::string	_name;
		std::string	_surname;
		std::string	_nickname;
		std::string	_number;
		std::string	_secret;

	public:
		Contact();
		~Contact(void);
		std::string	get_name(void) const;
		std::string	get_surname(void) const;
		std::string get_nickname(void) const;
		std::string get_number(void) const;
		std::string get_secret(void) const;
		void	entry_name(std::string name);
		void	entry_surname(std::string surname);
		void	entry_nickname(std::string nickname);
		void	entry_number(std::string number);
		void	entry_secret(std::string secret);
};

#endif