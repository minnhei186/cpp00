

//なぜスタティックを用いているのか？
static int _start_menu()
{
	std::string entry;//これクラス型なのか
	std::cout<<"select ADD SEARCH EXIT >";
	std::getline(std::cin,entry);
	if(std::cin.eof())
		return 3;
	if(entry.compare("ADD")==0)
		return 1;
	if(entry.compare("SEARCH")==0)
		return 2;
	if(entry.compare("EXIT")==0)
		return 3;
	return 0;
}


static int _full(Contact list[8])
{
	std::string rep;
	
	std::cout<<"The contact list is full,so add a new contact"";
	std::cout<<"will remove the first one from the list.\ncontinue?[yes-no]:";
	std::getline(std::cin,rep);
	if(rep.compare("no")==0)
	{
		std::cout<<"ok,retry"<<std::endl;
		return 0;
	}
	else if(rep.compare("yes")==0)
	{
		for(int i=1;i<8;i++)
			list[i-1]=list[i];
		list[7].clear();
		return 1;
	}
	std::cout<<"no mean"<<std::endl;
	return 1;
}

			


//ポインタは設定できないが、中身はいじれるよね。
static int _add(Contact list[8])
{
	int i;
	while(j<8&&list[j].empty()==0)
		j++;
	if(j==8)
		return (_full(list));
	list[j].setup();
	return 0;
}

	


int main(void)
{
	int state;
	Contact list[8];

	state=0;
	while(42)
	{
		if(state==0)
			state=_start_menu();
		else if(state==1)
			state=_add(list);
		else if(state==2)
			state=_search(list);
		else if(state==3)
			_end();
		else
		{
			printf("something error\n");
			return 1;
		}
	}
	return 0;
}
	

