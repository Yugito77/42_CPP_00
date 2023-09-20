/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact_Get.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:54:31 by hcherpre          #+#    #+#             */
/*   Updated: 2022/10/11 13:09:33 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::GetFirstName()
{
    return s_FirstName;
}

std::string Contact::GetLastName()
{
    return s_LastName;
}

std::string Contact::GetNickName()
{
    return s_NickName;
}

std::string Contact::GetPhoneNumber()
{
    return s_PhoneNumber;
}

std::string Contact::GetDarkestSecret()
{
    return s_DarkestSecret;
}