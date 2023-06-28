#include<conio.h>
#include<iostream.h>
class Stud
{
	int r_no,Eng,Cpp,Oracle,tot;
	char Name[20];
	float per;
	public:
	void getInfo()
	{
		cout<<endl<<ends<<"Enter Your Roll no. :";
		cin>>r_no;
		cout<<endl<<ends<<"Enter Your Name :";
		cin>>Name;
		cout<<endl<<endl<<ends<<"Enter Marks Of English :";
		cin>>Eng;
		cout<<endl<<ends<<"Enter Marks Of CPP :";
		cin>>Cpp;
		cout<<endl<<ends<<"Enter Marks Of Oracle :";
		cin>>Oracle;
	}
	void putInfo()
	{
		compute();
		cout<<endl<<ends<<"Total :"<<tot;
		cout<<endl<<ends<<"Percentage :"<<per;
	}
	void compute()
	{
		tot=Eng+Oracle+Cpp;
		per=(float)tot/3;
	}
};
void main()
{
	clrscr();
	Stud s1;
	s1.getInfo();
	s1.putInfo();
	getch();
}