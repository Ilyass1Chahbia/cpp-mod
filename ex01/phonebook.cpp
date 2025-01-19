/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilchahbi <ilchahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 18:51:07 by ilchahbi          #+#    #+#             */
/*   Updated: 2025/01/15 19:44:04 by ilchahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main()
{
	phonebook	bk;
	int         nb;
	std::string input;
	int			v;

	while (1)
	{
		contact   	pb;
		v = 0;
		if (std::cin.eof())
			exit(1);
		std::cout << "Select ADD, SEARCH or EXIT : " << std::endl;
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			while (!v)
			{
				if (std::cin.eof())
					exit(1);
				std::cout << "Enter First Name : ";
				std::getline(std::cin, input);
				pb.getfname(input);
				if (!input.empty() && input.find_first_not_of(" \t") != std::string::npos)
                    v = 1;
			}
			v = 0;
			while (!v)
			{
				if (std::cin.eof())
					exit(1);
				std::cout << "Enter Last Name : ";
				std::getline(std::cin, input);
				pb.getlname(input);
				if (!input.empty() && input.find_first_not_of(" \t") != std::string::npos)
                    v = 1;
			}
			v = 0;
			while (!v)
			{
				if (std::cin.eof())
					exit(1);
				std::cout << "Enter Nick-Name : ";
				std::getline(std::cin, input);
				pb.getnname(input);
				if (!input.empty() && input.find_first_not_of(" \t") != std::string::npos)
                    v = 1;
			}
			v = 0;
			while (!v)
			{
				if (std::cin.eof())
					exit(1);
				std::cout << "Enter Phone-Number : ";
				std::getline(std::cin, input);
				if (pb.allisdig(input))
					continue;
				pb.getnum(input);
				if (!input.empty() && input.find_first_not_of(" \t") != std::string::npos)
                    v = 1;
			}
			v = 0;
			while (!v)
			{
				if (std::cin.eof())
					exit(1);
				std::cout << "Enter Darkest Secret : ";
				std::getline(std::cin, input);
				pb.getdsec(input);
				if (!input.empty() && input.find_first_not_of(" \t") != std::string::npos)
                    v = 1;
			}
			bk.writebook(pb);
		}
		else if (input == "SEARCH")
		{
			bk.show_contacts();
			if (std::cin.eof())
				exit(1);
			std::cout << "Enter The Contact's Index : ";
			std::getline(std::cin, input);
			if (std::cin.eof())
				exit(1);
			std::istringstream str(input);
			str >> nb;
			bk.show_client(nb);
		}
		else if (input == "EXIT")
		{
			exit(0);
		}
    }
}
