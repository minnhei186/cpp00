/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts_set_getter.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:13:52 by hosokawa          #+#    #+#             */
/*   Updated: 2024/11/19 16:30:27 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

//getter

const std::string& Contacts::get_firstname() const
{
	return (this->firstname);
}
const std::string& Contacts::get_lastname() const
{
	return (this->lastname);
}
const std::string& Contacts::get_nickname() const
{
	return (this->nickname);
}
const std::string& Contacts::get_number() const
{
	return (this->number);
}
const std::string& Contacts::get_secret() const
{
	return (this->secret);
}


//setter

void Contacts::set_firstname(std::string firstname)
{
	this->firstname=firstname;
}
void Contacts::set_lastname(std::string lastname)
{
	this->lastname=lastname;
}
void Contacts::set_nickname(std::string nickname)
{
	this->nickname=nickname;
}
void Contacts::set_number(std::string number)
{
	this->number=number;
}
void Contacts::set_secret(std::string secret)
{
	this->secret=secret;
}





