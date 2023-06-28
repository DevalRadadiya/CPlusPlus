//Parameterize Constructor
#include<conio.h>
#include<iostream.h>
class test
{
	int a,b;
	public:
	test()
	{
		cout<<"\n\tEnter Real Number :";
		cin>>a;
		cout<<"\n\tEnter Image Number :";
		cin>>b;
	}
	test compute(test t2)
	{
		t2.a=a+t2.a;
		t2.b=b+t2.b;
		return t2;
	}
	void putData()
	{
		cout<<"\n\t"<<a<<" + i"<<b;
	}
};
void main()
{
	clrscr();
	test t1,t2;
	t2=t1.compute(t2);
	t2.putData();
	getch();
}