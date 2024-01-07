/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/01/04 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"
#include <string>

class PhoneBook
{
private:
	
	Contact _list[8];
	int     _index;
	std::string	resize_str(std::string str) const;
	void	displayCo(Contact contact) const;
	bool    displayPB(Contact _list[8]) const;

public:
	
	PhoneBook();
	~PhoneBook();
	void    search(void);
	void    add(void);
};

#endif