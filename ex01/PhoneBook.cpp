/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/01/04 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


PhoneBook::PhoneBook() : _index(0)
{
    std::cout << "-------------------------------" << std::endl;
    std::cout << "|          Bienvenue !         |" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    std::cout << "|     Commande disponible      |" <<std::endl;
    std::cout << "|  ADD   |   SEARCH  |   EXIT  |" << std::endl;
    std::cout << "-------------------------------" << std::endl;
}

PhoneBook::~PhoneBook()
{
    std::cout << "-------------------------------" << std::endl;
    std::cout << "|          A bientôt !         |" << std::endl;
    std::cout << "-------------------------------" << std::endl;
}

void    PhoneBook::add()
{
    std::string answer = "";

    std::cout << "------- NOUVEAU CONTACT -------" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    if (this->_index > 7)
    {
        std::cout << "Attention le nombre maximum de contact a été atteint ! " << std::endl;
        std::cout << "Le contact : " << this->_list[this->_index % 8].get_name() << " va être remplacer" << std::endl;
    }
    while (answer.empty())
    {
        std::cout << "> Insérer Nom :" << std::endl;
        std::getline(std::cin, answer);
        if (!answer.empty())
            this->_list[this->_index % 8].entry_name(answer);
    }
    answer.clear();
    while (answer.empty())
    {
        std::cout << "> Insérer Prénom :" << std::endl;
        std::getline(std::cin, answer);
        if (!answer.empty())
            this->_list[this->_index % 8].entry_surname(answer);
    }
    answer.clear();
    while (answer.empty())
    {
        std::cout << "> Insérer Surnom :" << std::endl;
        std::getline(std::cin, answer);
        if (!answer.empty())
            this->_list[this->_index % 8].entry_nickname(answer);
    }
    answer.clear();
    while (answer.empty())
    {
        std::cout << "> Insérer Numéro :" << std::endl;
        std::getline(std::cin, answer);
        if (!answer.empty())
            this->_list[this->_index % 8].entry_number(answer);
    }
    answer.clear();
    while (answer.empty())
    {
        std::cout << "> Insérer Son plus sombre secret :" << std::endl;
        std::getline(std::cin, answer);
        if (!answer.empty())
            this->_list[this->_index % 8].entry_secret(answer);
    }
    std::cout << "-------------------------------" << std::endl;
    std::cout << " ----- CONTACT ENREGISTRE -----" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    this->_index++;
    return ;
}

void    PhoneBook::displayCo(Contact contact) const
{
    std::cout << "-------------------------------" << std::endl;
    std::cout << "-------- FICHE CONTACT --------" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    std::cout << "Firstname      : " << contact.get_name() << std::endl;
    std::cout << "Lastname       : " << contact.get_surname() << std::endl;
    std::cout << "Nickname       : " << contact.get_nickname() << std::endl;
    std::cout << "Number         : " << contact.get_number() << std::endl;
    std::cout << "Darkest secret : " << contact.get_secret() << std::endl;
    std::cout << "-------------------------------" << std::endl;

    return ;
}

void    PhoneBook::search()
{
    std::string index;

    if (!displayPB(this->_list))
        return ;
    std::cout << "Entrer le numéro d'index souhaité" << std::endl;
    std::getline(std::cin, index);
    while (index[1] || index[0] < '1' || index[0] > '8')
    {
        std::cout << "Index incorrect, ressayez à nouveau" << std::endl;
        std::getline(std::cin, index);
    }
    if (this->_list[index[0] - 49].get_name().empty())
    {
        std::cout << "-------------------------------" << std::endl;
        std::cout << "-------- CONTACT VIDE ---------" << std::endl;
        std::cout << "-------------------------------" << std::endl;
        return ;
    }
    displayCo(this->_list[index[0] - 49]);
    return ;
}

std::string    PhoneBook::resize_str(std::string str) const
{
    if (str.size() < 10)
    {
        str.insert(0, 10 - str.size(), ' ');
    }
    else if (str.size() > 10)
    {
        str.resize(9);
        str.push_back('.');
    }
    return (str);
}

bool    PhoneBook::displayPB(Contact _list[8]) const
{
    std::string str;
    int j = 0;
    char i = '1';
    
    std::cout << "--------------------------------------------" << std::endl;
    std::cout << "|    Index| Firstname|  Lastname|  Nickname|" << std::endl;
    std::cout << "|---------|----------|----------|----------|" << std::endl;

    str = _list[j].get_name();
    if (str.size() <= 0)
    {
        std::cout << "Le répertoire est vide" << std::endl;
        return (false);
    }
    while (j < 8)
    {
        std::cout << "|";
        str = "        ";
        std::cout << str;
        str = i;
        std::cout << str << "|";
        str = resize_str(_list[j].get_name());
        std::cout << str << "|";
        str = resize_str(_list[j].get_surname());
        std::cout << str << "|";
        str = resize_str(_list[j].get_nickname());
        std::cout << str << "|" << std::endl;
        i++;
        j++;
    }
    std::cout << "--------------------------------------------" << std::endl;
    return (true);
}