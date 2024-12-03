/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:35:24 by hosokawa          #+#    #+#             */
/*   Updated: 2024/11/20 05:42:37 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Contacts::Contacts():
	firstname("no data"),
	lastname("no data"),
	nickname("no data "),
	number("no data"),
	secret("no data") {}

void Contacts::add_info(void)
{
	std::cout<<"1.>>";
	std::getline(std::cin,firstname);
	std::cout<<"2.>>";
	std::getline(std::cin,lastname);
	std::cout<<"3.>>";
	std::getline(std::cin,nickname);
	std::cout<<"4.>>";
	std::getline(std::cin,number);
	std::cout<<"5.>>";
	std::getline(std::cin,secret);
}

void Contacts::print_info(void)
{
	std::cout<<std::setw(16)<<"First name";
	std::cout<<" - ";
	std::cout<<this->firstname<<"\n";

	std::cout<<std::setw(16)<<"Last name";
	std::cout<<" - ";
	std::cout<<this->lastname<<"\n";

	std::cout<<std::setw(16)<<"Nickname";
	std::cout<<" - ";
	std::cout<<this->nickname<<"\n";

	std::cout<<std::setw(16)<<"Phone number";
	std::cout<<" - ";
	std::cout<<this->number<<"\n";

	std::cout<<std::setw(16)<<"Top secret";
	std::cout<<" - ";
	std::cout<<this->secret;

	std::cout<<std::endl;
}


