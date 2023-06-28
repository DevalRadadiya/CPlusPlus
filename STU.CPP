#include<conio.h>
#include<iomanip.h>
#include<iostream.h>
int i;
class Student
{
	long long int Enrollment_no,eng,os,cpp,tot;
	char Name[20];
	float per;
	public:
	void compute();
	void getInfo();
	void printInfo();
};
void Student::getInfo()
{
	cout<<"\n\tEnter Your Enrollment No. :";
	cin>>Enrollment_no;
	cout<<"\tEnter Your Name :";
	cin>>Name;
	cout<<"\n\tEnter Mark of English :";
	cin>>eng;
	cout<<"\tEnter Mark of CPP :";
	cin>>cpp;
	cout<<"\tEnter Mark of OS :";
	cin>>os;
	compute();
}
void Student::compute()
{
	tot=eng+os+cpp;
	per=(float)tot*100/300;
}
void Student::printInfo()
{
	cout<<"\n\tEnrollment No. : "<<Enrollment_no;
	cout<<"\n\tName : "<<Name;
	cout<<"\n\tTotal Marks : "<<tot;
	cout<<"\n\tPercentage : "<<setprecision(2)<<per;
}
void main()
{
	int n;
	clrscr();
	Student a[15];
	cout<<"\n\n\tEnter The Number Of Student : ";
	cin>>n;
	for(i=0;i<=n-1;i++)
	{
		clrscr();
		cout<<"GET INFO :\n\n"<<"\tSTUDENT "<<i+1<<":\n";
		a[i].getInfo();
	}
	clrscr();
	cout<<"PRINT INFO :";
	for(i=0;i<=n-1;i++)
	{
		cout<<ends<<"\n\n\tSTUDENT "<<i+1<<":\n";
		a[i].printInfo();
	}
	getch();
}