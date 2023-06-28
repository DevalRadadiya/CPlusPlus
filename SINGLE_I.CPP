#include<conio.h>
#include<iostream.h>
class A
{
	int a,b;
	public:
	int c;
	int get_a()
	{
		cout<<"\n\tEnter A :";
		cin>>a;
		return a;
	}
	int get_b()
	{
		cout<<"\n\tEnter B :";
		cin>>b;
		return b;
	}
	/*void put()
	{
		cout<<"\n\n\tMahin";
	}*/
	/*protected:
	int a,b;*/
};
class B:private A
{
	public:
	void operator+()
	{
		cout<<"\n\tSUM = "<<get_a()+get_b();
		//cout<<"\n\tSUM = "<<a+b;
	}
	/*void put()
	{
		cout<<"\n\tSUM = "<<a;
	}*/
};
void main()
{
	clrscr();
	//A a1;
	B b1;
	+b1;
	//b1.put();
	getch();
}