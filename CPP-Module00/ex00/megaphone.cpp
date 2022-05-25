/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomez <fgomez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 09:38:13 by fgomez            #+#    #+#             */
/*   Updated: 2021/07/05 10:11:33 by fgomez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	to_upper(std::string str)
{
	std::transform(str.begin(), str.end(), str.begin(), ::toupper);
	std::cout << str;
}

int	main(int ac, char **av)
{
	if (ac <= 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		for (int i = 1; i < ac; i++)
			to_upper(av[i]);
		std::cout << std::endl;
	}
	return (0);
}
