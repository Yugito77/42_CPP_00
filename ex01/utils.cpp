/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:54:21 by hcherpre          #+#    #+#             */
/*   Updated: 2022/10/12 13:24:57 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include "main.hpp"

std::string fill_FirstName(PhoneBook *repertoire, int i)
{
    int	j = 0;
	int	sz = 0;
    std::string str;
	std::string str2 = " ";
    
    str = repertoire->GetContact(i).GetFirstName();
    if (str.size() > 10)
    {
        str.resize(9);
        str.resize(9+1, '.');
    }
    else if (str.size() < 10)
    {
        sz = 10 - str.size();
        while (j++ < sz)
            str = str2 + str;
        j = 0;
    }
    return (str);
}

std::string fill_LastName(PhoneBook *repertoire, int i)
{
    int	j = 0;
	int	sz = 0;
    std::string str;
	std::string str2 = " ";
    
    str = repertoire->GetContact(i).GetLastName();
    if (str.size() > 10)
    {
        str.resize(9);
        str.resize(9+1, '.');
    }
    else if (str.size() < 10)
    {
        sz = 10 - str.size();
        while (j++ < sz)
            str = str2 + str;
        j = 0;
    }
    return (str);
}

std::string fill_NickName(PhoneBook *repertoire, int i)
{
    int	j = 0;
	int	sz = 0;
    std::string str;
	std::string str2 = " ";
    
    str = repertoire->GetContact(i).GetNickName();
    if (str.size() > 10)
    {
        str.resize(9);
        str.resize(9+1, '.');
    }
    else if (str.size() < 10)
    {
        sz = 10 - str.size();
        while (j++ < sz)
            str = str2 + str;
        j = 0;
    }
    return (str);
}

std::string remove_spaces_tab(std::string str)
{
    std::string	str2;
	std::string whitespaces (" \t\f\v\n\r");
	int	found_first;
	int	found_last;
	
	found_first = str.find_first_not_of(whitespaces);
    found_last = str.find_last_not_of(whitespaces);
	if (found_first == -1 || found_last == -1)
		return ("");
	str2 = str.substr(found_first, (found_last - found_first + 1));
	return (str2);
}

void    print_contact(int index, PhoneBook *repertoire)
{
	std::string str;
	std::string	str_index;
	const char * c;

	str = repertoire->GetContact(index - 1).GetFirstName();
	while (str.empty())
	{
        std::cout<<"Aucun contact  pour cet index ! Veuillez entrer un index correct : "<<std::endl;
        std::cin>>str_index;
		if (!std::cin)
			return ;
        c = str_index.c_str();
        index = std::atol(c);
        str = repertoire->GetContact(index - 1).GetFirstName();
	}        
	std::cout<<std::endl<<"Prenom : "<<str<<std::endl;
	str = repertoire->GetContact(index - 1).GetLastName();
	std::cout<<"Nom : "<<str<<std::endl;
	str = repertoire->GetContact(index - 1).GetNickName();
	std::cout<<"Surnom : "<<str<<std::endl;
	str = repertoire->GetContact(index - 1).GetPhoneNumber();
	std::cout<<"Numero de Telephone : "<<str<<std::endl;
	str = repertoire->GetContact(index - 1).GetDarkestSecret();
	std::cout<<"Son plus lourd secret : "<<str<<std::endl<<std::endl;
}