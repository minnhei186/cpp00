/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:35:43 by hosokawa          #+#    #+#             */
/*   Updated: 2024/11/19 15:12:47 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"

void print_menu(void)
{
	std::cout<<" ____menu____\n";
	std::cout<<"|            |\n";
	std::cout<<"|    add     |\n";
	std::cout<<"|   search   |\n";
	std::cout<<"|    exit    |\n";
	std::cout<<"|____________|\n";

	std::cout<<std::endl;
}

void print_add_format(void)
{
	std::cout<<"-you must adhere to the following format-\n";
	std::cout<<"     *Saved contacts must not have empty fields.\n";
	std::cout<<"\n";
	std::cout<<"1. first name\n";
	std::cout<<"2. last name\n";
	std::cout<<"3. nickname\n";
	std::cout<<"4. phone number \n";
	std::cout<<"5. darkest secret\n";
}



void menu(int *status)
{
	std::string select_word;

	print_menu();
	
	std::cout<<"----";
	std::cout<<std::endl;
	
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

void add(Contacts list[8],int *status)
{
	(void)list;
	(void)status;
	print_add_format();
}

	
int main(void)
{
	int status;
	Contacts list[8];
	std::string line;

	status=0;
	while(42)
	{
		if(status==0)
			menu(&status);
		if(status==1)
			add(list,&status);
		//else if(status==2)
		//	search(list);
		//else if(status==3)
		//	exit_book();
		//else
		//	std::cout<<"_retry_"<<std::endl;
		status=0;
	}
	return 0;
}

		





