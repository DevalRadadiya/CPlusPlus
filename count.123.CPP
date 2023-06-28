#include<iostream.h>
#include<conio.h>
class student
{
	private :
	int r_no,os,cpp,bde,tot,per;
	char name[20];
	public :
	void getinfo()
	{
		cout<<"Enter r_no : ";
		cin>>r_no;
		cout<<"Enter os Marks : ";
		cin>>os;
		cout<<"Enter cpp Marks : ";
		cin>>cpp;
		cout<<"Enter bde Marks : ";
		cin>>bde;
	}
	void compute()
	{
		tot=os+cpp+bde;
		per=(tot)*100/300;
	}
	void putinfo()
	{
		cout<<ends<<endl<<"r_no         : "<<r_no;
		cout<<ends<<endl<<"os Marks     : "<<os;
		cout<<ends<<endl<<"cpp Marks    : "<<cpp;
		cout<<ends<<endl<<"bde Marks    : "<<bde;
		cout<<ends<<endl<<"tot Marks    : "<<tot;
		cout<<ends<<endl<<"Percentages  : "<<per;
	}
};
void main ()
{
	clrscr();
	student a;
	a.getinfo();
	a.compute();
	a.putinfo();
	getch();
}





