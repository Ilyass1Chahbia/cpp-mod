/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilchahbi <ilchahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 10:04:49 by ilchahbi          #+#    #+#             */
/*   Updated: 2025/01/12 16:35:11 by ilchahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int			n;
    int         m;
    std::string res;
    
    n = 1;
    if (ac < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while (av[n])
		{
			res = av[n];
            m = 0;
            while (res[m])
            {
			    std::cout << (char)std::toupper(res[m]);
                m++;
            }
			n++;
		}
        std::cout << std::endl;
    }
}