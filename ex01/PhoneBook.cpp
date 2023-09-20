/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:01:29 by hcherpre          #+#    #+#             */
/*   Updated: 2022/10/12 12:40:41 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : s_index(0)
{
}


PhoneBook::~PhoneBook()
{
}

Contact PhoneBook::GetContact(int index)
{
	return s_contact[index];
}

void PhoneBook::CreateContact(Contact *contacts)
{
    if(s_index != 7)
	{
		s_contact[s_index] = *contacts;
		s_index += 1;
	}
	else if (s_index == 7)
	{
		s_contact[s_index] = *contacts;
		s_index = 0;
	}
}