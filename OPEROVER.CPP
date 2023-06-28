#include<conio.h>
#include<iostream.h>
class test
{
	int real,image;
	public:
	test()
	{
		cout<<"\n\tEnter value of Real :";
		cin>>real;
		cout<<"\n\tEnter value of Iamge :";
		cin>>image;
	}
	test(int a)
	{
		//cout<<a;
		//clrscr();
	}
	test(float b,int c)
	{
		//cout<<b<<c;
		//clrscr();
	}
	test operator /*KeyWord*/ + /*Symbol*/(test t2)  // OPERATOR OVERLOADING.....
	{
		test t3(5.5,5);
		t3.real=real+t2.real;
		t3.image=image+t2.image;
		return t3;
	}
	void putData()
	{
		cout<<"\n\t"<<real<<" + i"<<image;
	}
};
void main()
{
	clrscr();
	test t1,t2,t3(5);
	t3=t1+t2; // t3=t1.[function_name](t2);
	t3.putData();
	getch();
}