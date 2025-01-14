/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cont_funct.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilchahbi <ilchahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:59:21 by ilchahbi          #+#    #+#             */
/*   Updated: 2025/01/14 18:21:02 by ilchahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void    phonebook::writebook(contact pb)
{
    static int  n;
    
    client[n] = pb;
    client[n].showlist();
    if (n >= 8)
        n = 0;
    else
        n++;
}
