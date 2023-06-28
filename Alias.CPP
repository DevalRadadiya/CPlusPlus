#include<iostream.h>
#include<conio.h>
void swap (int &,int &);
void main()
{
	int a,b;
	clrscr();
	cout<<endl<<ends<< "Enter A :";
	cin>>a;
	cout<<endl<<ends<< "Enter B :";
	cin>>b;
	swap(a,b);
	getch();
}
void swap(int &x ,int &y)
{
	int z;
	z=x;
	x=y;
	y=z;
	cout<<x<<endl<<y;
}



