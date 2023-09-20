/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:01:53 by hcherpre          #+#    #+#             */
/*   Updated: 2022/10/12 12:39:37 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class	PhoneBook
{
	public :

	PhoneBook();
	Contact GetContact(int index);
	void	CreateContact(Contact *contacts);
	~PhoneBook();
	
	
	private:

	int		s_index;
	Contact s_contact[8];
	
};

#endif