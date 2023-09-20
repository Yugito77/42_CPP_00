/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:58:01 by hcherpre          #+#    #+#             */
/*   Updated: 2022/10/12 12:20:15 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
#define MAIN_HPP

#include <cstdlib>

std::string fill_FirstName(PhoneBook *repertoire, int i);
std::string fill_LastName(PhoneBook *repertoire, int i);
std::string fill_NickName(PhoneBook *repertoire, int i);
std::string remove_spaces_tab(std::string str);
void		print_contact(int index, PhoneBook *repertoire);

#endif