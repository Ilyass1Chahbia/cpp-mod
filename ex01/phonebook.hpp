/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilchahbi <ilchahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 11:55:51 by ilchahbi          #+#    #+#             */
/*   Updated: 2025/01/15 15:24:27 by ilchahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>

class contact
{
private:
    std::string	first;
    std::string	last;
	std::string nick;
    std::string num;
    std::string dark_s;
public:
    void    getfname(std::string str);
    void	getlname(std::string str);
    void	getnname(std::string str);
    void	getnum(std::string str);
    void	getdsec(std::string str);
    int     allisdig(std::string str);
    std::string retfname();
    std::string retlname();
    std::string retnname();
    std::string retnum();
    std::string retdsec();
    bool	    allempty();
};

class phonebook
{
private:
    contact client[8];
public:
    void    writebook(contact pb);
    void    show_contacts();
    void    show_client(int index);
};


#endif
