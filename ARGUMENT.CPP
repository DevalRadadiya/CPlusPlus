#include<iostream.h>
#include<conio.h>
class test
{
	private :
	int a;
	public :
	void getdata()
	{
		cout<<ends<<endl<<"Enter a value : ";
		cin>>a;
	}
	void display()
	{
		cout<<ends<<"sum = : "<<endl<<a;
	}
	void max (test t2)
	{
		if( a>t2.a)
		{
			cout<<a<<"is Big. ";
		}
		else
		{
			cout<<t2.a<<"is Big.";
		}
	}
};
void  main()
{
	clrscr();
	test t1,t2;
	t1.getdata();
	t2.getdata();
	t1.max(t2);
	getch();
}