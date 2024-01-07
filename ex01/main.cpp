/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main   .cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/01/04 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
    PhoneBook   directories;
    std::string str;

    while (str != "EXIT")
    {
        std::cout << "Entrer votre commande" << std::endl;
        std::getline(std::cin, str);
        if (str == "ADD")
            directories.add();
        else if (str == "SEARCH")
            directories.search();
    }
    return (0);
}
