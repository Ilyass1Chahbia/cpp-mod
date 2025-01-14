/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilchahbi <ilchahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 18:51:07 by ilchahbi          #+#    #+#             */
/*   Updated: 2025/01/14 18:24:14 by ilchahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main()
{
    int         n;
    std::string input;
    contact   	pb;
	phonebook	bk;
    
	while (1)
	{
		if (std::cin.eof())
			exit(1);
		std::cout << "Select ADD, SEARCH or EXIT : " << std::endl;
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			if (std::cin.eof())
				exit(1);
			std::cout << "Enter First Name : ";
			std::getline(std::cin, input);
			pb.getfname(input);
			if (std::cin.eof())
				exit(1);
			std::cout << "Enter Last Name : ";
			std::getline(std::cin, input);
			pb.getlname(input);
			if (std::cin.eof())
				exit(1);
			std::cout << "Enter Nick-Name : ";
			std::getline(std::cin, input);
			pb.getfname(input);
			if (std::cin.eof())
				exit(1);
			std::cout << "Enter Phone-Number : ";
			std::getline(std::cin, input);
			if (pb.allisdig(input))
				continue;
			pb.getnum(input);
			if (std::cin.eof())
				exit(1);
			std::cout << "Enter Darkest Secret : ";
			std::getline(std::cin, input);
			pb.getfname(input);
			bk.writebook(pb);
			
			
		}
		else if (input == "EXIT")
		{
			exit(0);
		}
    }
}
