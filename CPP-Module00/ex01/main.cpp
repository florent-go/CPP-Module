/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomez <fgomez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 10:26:44 by fgomez            #+#    #+#             */
/*   Updated: 2021/07/13 10:19:12 by fgomez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Annuaire.hpp"
#include "Contact.hpp"

int	main(void)
{
	Annuaire annuaire;
	std::string	str;

	while (1)
	{
		std::cout << ">";
		std::cin >> str;
		if (str == "ADD")
			annuaire.add_contact();
		else if (str == "SEARCH")
			annuaire.search_contact();
		else if (str == "EXIT")
		{
			std::cout << "The contacts are lost forever." << std::endl;
			break ;
		}	
	}
	return(0);
}