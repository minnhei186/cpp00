/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_utils.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:23:35 by hosokawa          #+#    #+#             */
/*   Updated: 2024/11/20 16:52:02 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"

static std::string format_field(const std::string& field)
{
    if (field.length() > 10)
        return field.substr(0, 9) + ".";
    return field;
}


void print_menu(void)
{

	std::cout<<"		"<<"\n";
	std::cout<<"		"<<"  ........menu.........  \n";
	std::cout<<"		"<<"._______________________.\n";
	std::cout<<"		"<<"|                       |\n";
	std::cout<<"		"<<"|          add          |\n";
	std::cout<<"		"<<"|         search        |\n";
	std::cout<<"		"<<"|          exit         |\n";
	std::cout<<"		"<<"|                       |\n";
	std::cout<<"		"<<"|-----------------------|\n";
	std::cout<<"		"<<".----------/-/---------.\n";
	std::cout<<"		"<<".----------------------.\n";
	std::cout<<"		"<<"/       #      #       /\n";
	std::cout<<"		"<<".----------------------.\n";


	std::cout<<std::endl;

	std::cout<<"what do you want ....?";
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

	std::cout<<std::endl;
}

void print_search_format(Contacts list[8])
{
	int i;

	std::cout<<std::setw(10)<<"Index";
	std::cout<<"|";
	std::cout<<std::setw(10)<<"First name";
	std::cout<<"|";
	std::cout<<std::setw(10)<<"Last name";
	std::cout<<"|";
	std::cout<<std::setw(10)<<"Nickname";
	std::cout<<"|";
	std::cout<<"\n";
	std::cout<<std::endl;


	i=0;
	while(i<8)
	{
		std::cout<<std::setw(10)<<i+1;
		std::cout<<"|";
		std::cout<<std::setw(10)<<format_field(list[i].get_firstname());
		std::cout<<"|";
		std::cout<<std::setw(10)<<format_field(list[i].get_lastname());
		std::cout<<"|";
		std::cout<<std::setw(10)<<format_field(list[i].get_nickname());
		std::cout<<"|";

		std::cout<<std::endl;
		i++;
	}
	std::cout<<"----------------------------------------------.";
	std::cout<<std::endl;

}



