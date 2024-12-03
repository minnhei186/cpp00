/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:35:43 by hosokawa          #+#    #+#             */
/*   Updated: 2024/11/27 15:44:13 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include "PhoneBook.hpp"
#include "Contacts.hpp"

void menu(int *status)
{
	std::string select_word;

	print_menu();
	
	std::cout<<"----";
	std::cout<<std::endl;
	
	std::cout<<">>";
	std::getline(std::cin,select_word);

	std::cout<<"----.";
	std::cout<<std::endl;

	if(select_word.compare("add")==0)
		*status=1;
	else if(select_word.compare("search")==0)
		*status=2;
	else if(select_word.compare("exit")==0)
		*status=3;
	else 
		*status=-1;
}
	
int main(void)
{
	int status;
	PhoneBook book;

	status=0;
	while(42)
	{
		if(status==0)
			menu(&status);
		if(status==1)
			book.add();
		else if(status==2)
			book.search();
		else if(status==3)
			book.exitPhoneBook();
		status=0;
	}
	return 0;
}

		





