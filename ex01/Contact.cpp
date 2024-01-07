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

#include "Contact.hpp"

Contact::Contact()
{
    
}

Contact::~Contact()
{

}

std::string Contact::get_name(void) const
{
    return (this->_name);
}

std::string Contact::get_surname(void) const
{
    return (this->_surname);
}

std::string Contact::get_nickname(void) const
{
    return (this->_nickname);
}

std::string Contact::get_number(void) const
{
    return (this->_number);
}

std::string Contact::get_secret(void) const
{
    return (this->_secret);
}

void    Contact::entry_name(std::string name)
{
    this->_name = name;
}

void    Contact::entry_surname(std::string surname)
{
    this->_surname = surname;
}

void    Contact::entry_nickname(std::string nickname)
{
    this->_nickname = nickname;
}

void    Contact::entry_number(std::string number)
{
    this->_number = number;
}

void    Contact::entry_secret(std::string secret)
{
    this->_secret = secret;
}
