/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:35:43 by hosokawa          #+#    #+#             */
/*   Updated: 2024/11/20 20:57:50 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

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

void deleat_old_info(Contacts list[8])
{
	int i;

	i=1;

	while(i<8)
	{
		list[i-1].set_firstname(list[i].get_firstname());
		list[i-1].set_lastname(list[i].get_lastname());
		list[i-1].set_nickname(list[i].get_nickname());
		list[i-1].set_number(list[i].get_number());
		list[i-1].set_secret(list[i].get_secret());
		i++;
	}
}

		

		

void add(Contacts list[8])
{
	static int i;

	print_add_format();

	if(i>7)
	{
	//	print_deleat_format();
		deleat_old_info(list);
		list[7].add_info();
		i++;
	}
	else
	{
		list[i].add_info();
		i++;
	}

}

void search(Contacts list[8])
{
	std::string index;
	

	print_search_format(list);

	std::cout<<"-whose infomation do you want to know ?-\n";
	std::cout<<"                 *enter the index number of a person.\n";
	std::cout<<std::endl;

	std::cout<<"---------\n";
	std::cout<<">>index:";
	std::getline(std::cin,index);
	std::cout<<"---------.\n";

	//std::stringstream ss(index);
	
	//i_index=index.atoi();
	std::cout<<"\n";
	list[0].print_info();

	std::cout<<"------------------------------.";
	std::cout<<std::endl;
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
			add(list);
		else if(status==2)
			search(list);
		//else if(status==3)
		//	exit_book();
		//else
		//	std::cout<<"_retry_"<<std::endl;
		status=0;
	}
	return 0;
}

		





