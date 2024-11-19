/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:16:22 by hosokawa          #+#    #+#             */
/*   Updated: 2024/11/19 14:37:55 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Contacts
{

  	private:
		std::string index;
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string secret;
	public:
		Contacts();

		const std::string&	get_index(void) const;
		const std::string&	get_firstname(void) const;
		const std::string&	get_lastname(void) const;
		const std::string&	get_nickname(void) const;
		const std::string&	get_secret(void) const;
		void				set_index(std::string index);
		void				set_firstname(std::string firstname);
		void				set_lastname(std::string lastname);
		void				set_nickname(std::string nickname);
		void				set_secret(std::string secret);
};
