#include<conio.h>
#include<iostream.h>
class test
{
	static int count;
	public:
	test()
	{
		cout<<"\n\tCreat Object : "<<++count;
	}
	~test()
	{
		cout<<"\n\n\tTotal Object : "<<count;
	}
};
int test::count;
void main()
{
	clrscr();
	test t1;
	{
		test t2;
	}
	{
		test t3;
	}
	{
		test t4;
	}
	getch();
}