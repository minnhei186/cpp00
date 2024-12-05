/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:02:59 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/05 15:26:09 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"
#include "PhoneBook.hpp"
#include "main.hpp"

PhoneBook::PhoneBook() : add_count(0)
{
}

void PhoneBook::deleat_old_info()
{
	int	i;

	i = 1;
	while (i < 8)
	{
		list[i - 1].set_firstname(list[i].get_firstname());
		list[i - 1].set_lastname(list[i].get_lastname());
		list[i - 1].set_nickname(list[i].get_nickname());
		list[i - 1].set_number(list[i].get_number());
		list[i - 1].set_secret(list[i].get_secret());
		i++;
	}
}

void PhoneBook::add()
{
	print_add_format();
	if (add_count > 7)
	{
		deleat_old_info();
		if(list[7].add_info()==false)
		{
			list[7].init_info();
			return ;
		}
	}
	else
	{
		if(list[add_count].add_info()==false)
		{
			list[add_count].init_info();
			return ;
		}
	}
	add_count++;
}

void PhoneBook::search()
{
	int	index;

	std::string index_str;
	print_search_format(list);
	std::cout << "-whose infomation do you want to know ?-\n";
	std::cout << "                 *enter the index number of a person(1~8).\n";
	std::cout << std::endl;
	std::cout << "---------\n";
	std::cout << ">>index:";
	if(!std::getline(std::cin, index_str))
	{
		std::cout<<"getline error occurred  or recive eof...sorry...exit"<<std::endl;
		exit (EXIT_FAILURE);
	}
	std::cout << "---------.\n";

	if(!is_all_digits(index_str)||index_str.length() !=1)
	{
		std::cout<<"...please 1~8 number..."<<std::endl;
		return ;
	}

	index = std::stoi(index_str);
	if (index < 1 || 8 < index)
	{
		std::cout << "...please 1~8 number..." << std::endl;
		return ;
	}
	if (list[index - 1].get_firstname() == "no data")
	{
		std::cout << "...no contact found at this index..." << std::endl;
		return ;
	}
	std::cout << "\n";
	list[index-1].print_info();
	std::cout << "------------------------------.";
	std::cout << std::endl;
}

void PhoneBook::exitPhoneBook()
{
	exit(EXIT_SUCCESS);
}
