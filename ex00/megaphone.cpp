#include <iostream>
#include <cctype>



int main(int argc,char **argv)
{
	int i;
	std::string str;
	std::string new_str;


	if(argc==1)
	{
		str="* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		std::cout<<str<<std::endl;
		return 0;
	}

	i=1;
	while(argv[i])
	{
		str=argv[i];
		new_str=argv[i];
		transform(str.begin(),str.end(),new_str.begin(),::toupper);
		std::cout<<new_str<<' ';
		i++;
	}
	return 0;
}


