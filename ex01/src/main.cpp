/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                         +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:35:43 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/05 17:37:29 by hosokawa         ###   ########.fr       */
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
	if(!std::getline(std::cin,select_word))
	{
		std::cout<<"getline error occurred  or recive eof...sorry...exit"<<std::endl;
		exit (EXIT_FAILURE);
	}


	std::cout<<"----.";
	std::cout<<std::endl;

	if(select_word.compare("ADD")==0)
		*status=1;
	else if(select_word.compare("SEARCH")==0)
		*status=2;
	else if(select_word.compare("EXIT")==0)
		*status=3;
	else 
	{
		std::cout<<"...always be vigilant..."<<std::endl;
		*status=-1;
	}
}
	
int main(void)
{
	int status;
	PhoneBook book;

	status=0;
	while(true)
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

		





