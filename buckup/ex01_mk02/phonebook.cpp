#include <iostream>
#include <string>

class Contacts
{
  public:
	int id;
	int number;
	Contacts()
	{
		this->id = 0;
		this->number = 0;
	}
};

class Phonebook
{
  public:
	Contacts contacts[8];
	int i;
	int j;

	Phonebook()
	{
		this->i = 0;
	}

	int get_number(int select)
	{
		return (this->contacts[select].number);
	}

	void push_set_number(int num)
	{
		if (i == 7)
		{
			this->contacts[i].number = num;
			i = 0;
		}
		else
		{
			this->contacts[i].number = num;
			i++;
		}
		return ;
	}

	void print_all()
	{
		j=0;
		while(j<8)
		{
			std::cout<<this->contacts[i].number<<std::endl;
			j++;
		}
		return ;
	}

};

int	main(void)
{
	int			number;
	char		c;
	int select;
	Phonebook	phonebook;

	while (1)
	{
		std::cin >> c;
		if (c == 'w')
		{
			std::cin>>select;
			number = phonebook.get_number(select);
			std::cout << number << std::endl;
		}
		else if (c == 'r')
		{
			std::cin >> number;
			phonebook.push_set_number(number);
		}
		else if(c=='p')
		{
			phonebook.print_all();
		}
		else if (c == 'e')
		{
			return (0);
		}
	}
}
