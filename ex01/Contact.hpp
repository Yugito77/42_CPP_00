/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:02:08 by hcherpre          #+#    #+#             */
/*   Updated: 2022/10/12 12:47:45 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>

class	Contact
{
	public :
	
	Contact();
	void		FirstName(std::string str);
	void		LastName(std::string str);
	void		NickName(std::string str);
	void		PhoneNumber(std::string str);
	void		DarkestSecret(std::string str);
	std::string	GetFirstName();
	std::string	GetLastName();
	std::string	GetNickName();
	std::string	GetPhoneNumber();
	std::string	GetDarkestSecret();
	
	private:

    std::string s_FirstName;
    std::string s_LastName;
    std::string s_NickName;
    std::string s_PhoneNumber;
    std::string s_DarkestSecret;
	
};

#endif