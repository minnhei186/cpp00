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

void Contacts::init_info(void)
{
	firstname="no data";
	lastname="no data";
	nickname="no data ";
	number="no data";
	secret="no data";
}

bool Contacts::add_info(void)
{
	std::cout<<"1.>>";
	if(std::getline(std::cin,firstname)==false)
	{
		std::cout<<"getline error occurred  or recive eof...sorry...exit"<<std::endl;
		exit (EXIT_FAILURE);
	}
	if(firstname.empty())
	{
		std::cout<<"...need string...retry..."<<std::endl; 
		return false;
	}

	std::cout<<"2.>>";
	if(std::getline(std::cin,lastname)==false)
	{
		std::cout<<"getline error occurred  or recive eof...sorry...exit"<<std::endl;
		exit (EXIT_FAILURE);
	}
	if(lastname.empty())
	{

		std::cout<<"...need string...retry..."<<std::endl; 
		return false;
	}

	std::cout<<"3.>>";
	if(std::getline(std::cin,nickname)==false)
	{
		std::cout<<"getline error occurred  or recive eof...sorry...exit"<<std::endl;
		exit (EXIT_FAILURE);
	}
	if(nickname.empty())
	{

		std::cout<<"...need string...retry..."<<std::endl; 
		return false;
	}


	std::cout<<"4.>>";
	if(std::getline(std::cin,number)==false)
	{
		std::cout<<"getline error occurred  or recive eof...sorry...exit"<<std::endl;
		exit (EXIT_FAILURE);
	}
	if(number.empty())
	{

		std::cout<<"...need string...retry..."<<std::endl; 
		return false;
	}


	std::cout<<"5.>>";
	if(std::getline(std::cin,secret)==false)
	{
		std::cout<<"getline error occurred  or recive eof...sorry...exit"<<std::endl;
		exit (EXIT_FAILURE);
	}
	if(secret.empty())
	{

		std::cout<<"...need string...retry..."<<std::endl; 
		return false;
	}

	return true;
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


