/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:51:52 by hosokawa          #+#    #+#             */
/*   Updated: 2024/11/27 14:30:15 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contacts.hpp"
#include <string>
#include <iostream>


class PhoneBook
{
	private:
		Contacts list[8];
		int add_count;
	public:
		PhoneBook();
		void add();
		void deleat_old_info();
		void search();
		void exitPhoneBook();	

};
