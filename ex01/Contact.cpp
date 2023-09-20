/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:01:51 by hcherpre          #+#    #+#             */
/*   Updated: 2022/10/11 13:09:29 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

void Contact::FirstName(std::string str)
{
    s_FirstName = str;
}

void Contact::LastName(std::string str)
{
    s_LastName = str;
}

void Contact::NickName(std::string str)
{
    s_NickName = str;
}

void Contact::PhoneNumber(std::string str)
{
    s_PhoneNumber = str;
}

void Contact::DarkestSecret(std::string str)
{
    s_DarkestSecret = str;
}
