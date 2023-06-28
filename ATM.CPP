#include<conio.h>
#include<iostream.h>
#include<process.h>
int Case;
class ATM
{
	static int currentbal;
	int dipo,withd;
	public:
	ATM()
	{
		currentbal=0;
	}
	void diposit()
	{
		cout<<"\n\tEnter Diposit Amount :";
		cin>>Case;
		currentbal=currentbal+Case;
		cout<<"\n\n\tAvaliable Balance :"<<currentbal;
	}
	void withdraw()
	{
		cout<<"\n\tEnter Withdraw Amount :";
		cin>>Case;
		if(currentbal>=Case)
		{
			currentbal=currentbal-Case;
			cout<<"\n\n\tAvaliable Balance :"<<currentbal;
		}
		else
		{
			cout<<"\n\n\tAvaliable Balance :"<<currentbal;
			cout<<"\n\tNo Sufficient Balance !!!";
		}
	}
};
int ATM::currentbal;
void main()
{
	int ch;
	ATM a1;
	while(1)
	{
		clrscr();
		cout<<"\n\t[1] Diposit Case.";
		cout<<"\n\t[2] Withdraw Case.";
		cout<<"\n\t[3] Exit.";
		cout<<"\n\tEnter Your Choice :";
		cin>>ch;
		switch(ch)
		{
			case 1:
				a1.diposit();
				break;
			case 2:
				a1.withdraw();
				break;
			case 3:
				exit(0);
				break;
			default:
				cout<<"\n\n\tInvalid Choice !!!";
		}
		getch();
	}
}