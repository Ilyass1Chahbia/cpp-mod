/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cont_funct.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilchahbi <ilchahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:59:21 by ilchahbi          #+#    #+#             */
/*   Updated: 2025/01/15 15:23:00 by ilchahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string contact::retfname()
{
    return (first);
}

std::string contact::retlname()
{
    return (last);
}

std::string contact::retnname()
{
    return (nick);
}

std::string contact::retnum()
{
    return (num);
}

std::string contact::retdsec()
{
    return (dark_s);
}

void    phonebook::writebook(contact pb)
{
    static int  n;
    
    client[n] = pb;
    if (n >= 8)
        n = 0;
    else
        n++;
}

std::string subname(std::string str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void    phonebook::show_contacts()
{
    std::cout << "|-------------------------------------------|" << std::endl;
    std::cout << "|   Index  |First Name| Last Name| Nickname |" << std::endl;
    std::cout << "|-------------------------------------------|" << std::endl;

    for (int i = 0; i < 8; i++)
    {
        if (!client[i].allempty())
        {
            std::cout << "|" << std::setw(10) << i << "|";
            std::cout << std::setw(10) << subname(client[i].retfname()) << "|";
            std::cout << std::setw(10) << subname(client[i].retlname()) << "|";
            std::cout << std::setw(10) << subname(client[i].retnname()) << "|" << std::endl;
        }
    }
    std::cout << "|-------------------------------------------|" << std::endl;
}

void    phonebook::show_client(int index)
{
    if (index < 0 || index >= 8 || client[index].allempty())
    {
        std::cout << "Invalid index or empty contact!" << std::endl;
        return;
    }

    std::cout << "First Name: " << client[index].retfname() << std::endl;
    std::cout << "Last Name: " << client[index].retlname() << std::endl;
    std::cout << "Nickname: " << client[index].retnname() << std::endl;
    std::cout << "Phone Number: " << client[index].retnum() << std::endl;
    std::cout << "Darkest Secret: " << client[index].retdsec() << std::endl;
}
