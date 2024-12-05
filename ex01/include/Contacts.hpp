/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:16:22 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/05 13:47:34 by hosokawa         ###   ########.fr       */
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
		void init_info(void);
		bool add_info(void);  
		void print_info(void);
	
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
