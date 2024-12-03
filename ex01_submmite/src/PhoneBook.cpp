/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:02:59 by hosokawa          #+#    #+#             */
/*   Updated: 2024/11/27 15:36:41 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contacts.hpp"
#include "main.hpp"


PhoneBook::PhoneBook():add_count(0)
{}


void PhoneBook::deleat_old_info()
{
	int i;

	i=1;

	while(i<8)
	{
		list[i-1].set_firstname(list[i].get_firstname());
		list[i-1].set_lastname(list[i].get_lastname());
		list[i-1].set_nickname(list[i].get_nickname());
		list[i-1].set_number(list[i].get_number());
		list[i-1].set_secret(list[i].get_secret());
		i++;
	}
}

void PhoneBook::add()
{
	print_add_format();	
	if(add_count>7)
	{
		deleat_old_info();
		list[7].add_info();
	}
	else
		list[add_count].add_info();
	add_count++;
}


void PhoneBook::search()
{
	std::string index;

	print_search_format(list);

	std::cout<<"-whose infomation do you want to know ?-\n";
	std::cout<<"                 *enter the index number of a person.\n";
	std::cout<<std::endl;

	std::cout<<"---------\n";
	std::cout<<">>index:";
	std::getline(std::cin,index);
	std::cout<<"---------.\n";

	//std::stringstream ss(index);

	//i_index=index.atoi();
	std::cout<<"\n";
	list[0].print_info();

	std::cout<<"------------------------------.";
	std::cout<<std::endl;
}

void PhoneBook::exitPhoneBook()
{
	exit(EXIT_SUCCESS);
}





