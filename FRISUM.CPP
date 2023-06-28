#include<conio.h>
#include<iostream.h>
class A
{
	int a;
	public:
	void getData()
	{
		cout<<"\n\tEnter Value :";
		cin>>a;
	}
	void display()
	{
		cout<<"\n\tSUM = "<<a;
	}
	friend A sum(A a1,A a2);
};
A sum(A a1,A a2)
{
	A a3;
	a3.a=a1.a+a2.a;
	return a3;
}
void main()
{
	clrscr();
	A a1,a2,a3;
	a1.getData();
	a2.getData();
	a3=sum(a1,a2);
	a3.display();
	getch();
}
