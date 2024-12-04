/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:16:22 by hosokawa          #+#    #+#             */
/*   Updated: 2024/11/27 13:51:48 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <iomanip>

class Contacts
{

  	private:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string number;
		std::string secret;
	public:
		Contacts();
		void add_info();  
		void print_info();
	
		const std::string&	get_firstname(void) const;
		const std::string&	get_lastname(void) const;
		const std::string&	get_nickname(void) const;
		const std::string&	get_number(void) const;
		const std::string&	get_secret(void) const;
		void				set_firstname(std::string firstname);
		void				set_lastname(std::string lastname);
		void				set_nickname(std::string nickname);
		void				set_number(std::string number);
		void				set_secret(std::string secret);
};
