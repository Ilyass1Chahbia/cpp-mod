/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_book_funct.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilchahbi <ilchahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 11:24:30 by ilchahbi          #+#    #+#             */
/*   Updated: 2025/01/14 18:20:23 by ilchahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void    contact::getfname(std::string str)
{
	first = str;
}

void	contact::getlname(std::string str)
{
	last = str;
}

void	contact::getnname(std::string str)
{
	nick = str;
}

int	contact::allisdig(std::string str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		if (!(std::isdigit(str[n])))
			return (1);
		n++;
	}
	return (0);
}

void	contact::getnum(std::string str)
{
	num = str;
}

void	contact::showlist()
{
	std::cout << "here : " << first << std::endl;
}

void	contact::getdsec(std::string str)
{
	dark_s = str;
}
