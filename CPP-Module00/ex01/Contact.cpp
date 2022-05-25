/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomez <fgomez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 09:46:58 by fgomez            #+#    #+#             */
/*   Updated: 2021/08/13 10:18:46 by fgomez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Annuaire.hpp"
#include "Contact.hpp"

Contact::Contact()
{
	for (int i = 0; i < 5; i++)
		this->informations[i] = std::string();
}

Contact::~Contact()
{
}

int Contact::set_informations(int index)
{
	this->index = index;
	for (int i = 0; i < 5; i++)
	{
		std::cout << "# " << Contact::fields_name[i] << ":\n>>";
		std::cin >> this->informations[i];
	}
	size_t totalLength = 0;
	for (int i = 0; i < 5; i++)
		totalLength += this->informations[i].length();
	if (totalLength == 0)
	{
		std::cout << "# Empty contact not added !" << std::endl;
		return (0);
	}
	std::cout << "# Contact added !" << std::endl;
	return (1);
}

void Contact::display_header()
{
	std::cout << "|" << std::setw(10) << this->index;
	for (int i = 0; i < 3; i++)
	{
		std::cout << "|";
		if (this->informations[i].length() > 10)
			std::cout << this->informations[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->informations[i];
	}
	std::cout << "|" << std::endl;
}

void Contact::display(void)
{
	std::cout << "# Contact [" << this->index << "]" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << Contact::fields_name[i] << ": ";
		std::cout << this->informations[i] << std::endl;
	}
}
