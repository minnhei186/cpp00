/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:27:41 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/05 15:10:26 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contacts.hpp"
#include <string>
#include <iostream>
#include <iomanip>

bool is_all_digits(const std::string& str);
void print_menu(void);
void print_add_format(void);
void print_search_format(Contacts list[8]);
