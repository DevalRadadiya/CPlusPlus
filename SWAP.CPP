#include<iostream.h>
#include<conio.h>
void swap (int &,int &);
void main()
{

	int a,b;
	clrscr();
	cout<<endl<<ends<< "Enter A : ";
	cin>>a;
	cout<<endl<<ends<< "Enter B : ";
	cin>>b;
	swap(a,b);
	cout<<endl<< " A : "<<a;
	cout<<endl<< " B : "<<b;
	getch();
}
void swap (int &p, int &r)
{
	int z=p;
	p=r;
	r=z;
	cout<<endl<< " P : "<<p;
	cout<<endl<< " R : "<<r;
}

