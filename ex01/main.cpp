#include <iostream>

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

	
int main(void)
{
	int status;
	Contacts list[8];

	status=0;
	while(42)
	{
		if(status==0)
			menu(&status);
		
		//if(status==1)
		//	add(list);
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

		





