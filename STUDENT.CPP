#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
#define max 15
int i;
class Student
{
	int rno;
	char nm[25];
	float per;
	public:
	void setData();
	void getData();
};
void Student::setData()
{
	cout<<endl<<ends<<"Enter Roll No. :";
	cin>>rno;
	cout<<ends<<"Enter Name :";
	cin>>nm;
	cout<<ends<<"Enter Percentage :";
	cin>>per;
}
void Student::getData()
{
	cout<<endl<<"Roll no. : "<<rno<<endl<<"Name : "<<nm<<endl<<"Percentage : "<<setprecision(2)<<per<<endl;
}
void main()
{
	int n;
	Student s[max]; //Creat Object
	clrscr();
	cout<<endl<<ends<<"Enter Number Of Student : ";
	cin>>n;
	for(i=0;i<=n-1;i++)
	{
		cout<<endl<<ends<<"Enter Details Of Student "<<i+1<<" :\n";
		s[i].setData();
	}
	clrscr();
	for(i=0;i<=n-1;i++)
	{
		cout<<endl<<"Details Of Student "<<i+1<<" :\n";
		s[i].getData();
	}
	getch();
}