#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
class test
{
	private :
	 int roll_no ,eng,cpp,os,tot,per;
	 char name[25];
	public :
	void getdata()
	{
		cout<<endl<<ends<<"Enter a Roll_no : ";
		cin>>roll_no;
		cout<<endl<<ends<<"Enter a Name : ";
		cin>>name;
		cout<<endl<<ends<<"Enter your English  Marks : ";
		cin>>eng;
		cout<<endl<<ends<<"Enter yout Cpp Name : ";
		cin>>cpp;
		cout<<endl<<ends<<"Enter your os Name : ";
		cin>>os;
		compute();
	}
	void putdata()
	{
		cout<<endl<<ends<<"Roll no : "<<roll_no;
		cout<<endl<<ends<<"Name  : "<<name;
		cout<<endl<<ends<<"english  : "<<eng;
		cout<<endl<<ends<<"cpp  : "<<cpp;
		cout<<endl<<ends<<"os  : "<<os;
		cout<<endl<<ends<<"Total Marks : "<<tot;
		cout<<endl<<ends<<"Pertange : "<<setprecision(2)<<per;
	}
	void compute();
};
void test :: compute ()
{
	tot=eng+cpp+os;
	per=(tot)*100/300;
}
void main()
{
	 int b;
	 clrscr();
	 test t[20];
	 cout<<"Enter number of student : ";
	 cin>>b;
	 for(int i=0 ; i<b ; i++)
	 {
		cout<<ends<<endl<<"student " << i+1<<" : \n";
		t[i].getdata();
	 }
	 for(i=0;i<b;i++)
	 {
		cout<<"\n student "<<i+1<<" : \n";
		t[i].putdata();
	 }
	 getch();
}