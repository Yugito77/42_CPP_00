/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:02:19 by hcherpre          #+#    #+#             */
/*   Updated: 2022/10/12 13:13:49 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include "main.hpp"
#include <cstdlib>

void	ADD_2(PhoneBook *repertoire, Contact *contacts)
{
	std::string	str;
	
	std::cout<<"Surnom : ";
	std::getline(std::cin, str);
	str = remove_spaces_tab(str);
	while (str.empty())
	{
		if (!std::cin)
			return ;
		std::getline(std::cin, str);
		str = remove_spaces_tab(str);
	}
	contacts->NickName(str);
	if (!std::cin)
		return ;
	std::cout<<"Numero de Telephone : ";
	std::getline(std::cin, str);
	str = remove_spaces_tab(str);
	while (str.empty())
	{
		if (!std::cin)
			return ;
		std::getline(std::cin, str);
		str = remove_spaces_tab(str);
	}
	contacts->PhoneNumber(str);
	if (!std::cin)
		return ;
	std::cout<<"Son plus lourd secret : ";
	std::getline(std::cin, str);
	str = remove_spaces_tab(str);
	while (str.empty())
	{
		if (!std::cin)
			return ;
		std::getline(std::cin, str);
		str = remove_spaces_tab(str);
	}
	contacts->DarkestSecret(str);
	if (!std::cin)
		return ;
	repertoire->CreateContact(contacts);
}

void	ADD(PhoneBook *repertoire, Contact *contacts)
{
	std::string	str;
	
	if (!std::cin)
		return ;
	std::cout<<"Prenom : ";
	std::getline(std::cin, str);
	str = remove_spaces_tab(str);
	while (str.empty())
	{
		if (!std::cin)
			return ;
		std::getline(std::cin, str);
		str = remove_spaces_tab(str);
	}
	contacts->FirstName(str);
	if (!std::cin)
		return ;
	std::cout<<"Nom : ";
	std::getline(std::cin, str);
	str = remove_spaces_tab(str);
	while (str.empty())
	{
		if (!std::cin)
			return ;
		std::getline(std::cin, str);
		str = remove_spaces_tab(str);
	}
	contacts->LastName(str);
	if (!std::cin)
		return ;
	ADD_2(repertoire,contacts);
}

void	SEARCH(PhoneBook *repertoire)
{
	int	i = 1;
	int	index;
	std::string str;
	std::string	str_index;
	const char * c;
	
	if (!std::cin)
		return ;
	while (i <= 8)
	{
		std::cout<<"|          "<<i<<"|";
		str = fill_FirstName(repertoire, i - 1);
		std::cout<<str<< "|";
		str = fill_LastName(repertoire, i - 1);
		std::cout<<str<< "|";
		str = fill_NickName(repertoire, i - 1);
		std::cout<<str<< "|"<<std::endl;
		i++;
	}
	std::cout<<"Veuillez entrer l'index du contact que vous souhaitez afficher : "<<std::endl;
	std::cin>>str_index;
	c = str_index.c_str();
	index = std::atol(c);
	if (index < 1 || index > 8)
	{
		while (index < 1 || index > 8)
		{
			if (!std::cin)
				return ;
			std::cout<<"Veuillez entrer un index correct : "<<std::endl;
			std::cin>>str_index;
			c = str_index.c_str();
			index = std::atol(c);
		}
	}
	print_contact(index, repertoire);
}

int main()
{
    PhoneBook	repertoire;
	Contact		contacts;
	std::string	str;
	int	j = 0;
	
	while (1)
	{
		if (!std::cin)
			break ;
		if (j != 0 && !str.empty())
			std::cout<<std::endl<<"Demande incorrect; que souhaitez-vous faire ? "<<std::endl;
		else if (j == 0)
		{
			std::cout<<"Bienvenue dans votre PhoneBook personnel ; que souhaitez-vous faire ? "<<std::endl;
			j = 1;
		}
		std::getline(std::cin, str);
		str = remove_spaces_tab(str);
		if(!str.compare("ADD"))
		{
			ADD(&repertoire, &contacts);
			j = 0;
		}
		else if(!str.compare("SEARCH"))
		{
			SEARCH(&repertoire);
			j = 0;
		}
		else if(!str.compare("EXIT"))
			break ;
	}
	return (0);
}
