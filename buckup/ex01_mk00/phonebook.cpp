#include <string>
#include <iostream>

class Contacts
{
	public:
		int id;
		int phonenumber;

};



class Phonebook
{
  private:
	int number;

  public:
	Contacts contacts[8];
	int i;
	Phonebook()
	{
		this->number = 0;
		this->i=0;
	}

	int phone_id;
	int get_number()
	{
		return (this->number);
	}
	void set_number(int num)
	{
		this->number = num;
		return ;
	}
};

int	main(void)
{
	int			number;
	char		c;
	Phonebook	phonebook;

	while (1)
	{
		std::cin >> c;
		if (c == 'w')
		{
			number = phonebook.get_number();
			std::cout << number << std::endl;
		}
		else if (c == 'r')
		{
			std::cin >> number;
			phonebook.set_number(number);
		}

		else if(c=='e')
		{
			return 0;
		}
	}

}
