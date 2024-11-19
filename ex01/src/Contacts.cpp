/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:35:24 by hosokawa          #+#    #+#             */
/*   Updated: 2024/11/19 15:34:10 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"

Contacts::Contacts():
	firstname("default"),
	lastname("default"),
	nickname("default"),
	number("default"),
	secret("default") {}

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

