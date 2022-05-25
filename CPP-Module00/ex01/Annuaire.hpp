/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Annuaire.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomez <fgomez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 10:28:03 by fgomez            #+#    #+#             */
/*   Updated: 2021/07/13 09:43:53 by fgomez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANNUAIRE_HPP
# define ANNUAIRE_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Contact.hpp"

class Annuaire 
{
private:
	Contact	contacts[8];
	int		amount;
public :
	Annuaire(void);
	~Annuaire(void);

	void	show_startup(void);
	void	add_contact(void);
	void	search_contact(void);
	void	show_search_header(void);
};

#endif