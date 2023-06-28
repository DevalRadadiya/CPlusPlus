#include<conio.h>
#include<iostream.h>
#include<process.h>
class test
{
	int a;
	public:
	test()
	{
		cout<<"\n\tEnter Value :";
		cin>>a;
	}
	void operator +=(test t2)
	{
		a+=t2.a;
		cout<<"\n\tAddtion :"<<a;
	}
	void operator -=(test t2)
	{
		a-=t2.a;
		cout<<"\n\tSubtraction :"<<a;
	}
	void operator *=(test t2)
	{
		a*=t2.a;
		cout<<"\n\tMultiPlication :"<<a;
	}
	void operator /=(test t2)
	{
		a/=t2.a;
		cout<<"\n\tDivision :"<<a;
	}
};
void main()
{
	int ch;
	clrscr();
	test t1,t2;
	while(1)
	{
		clrscr();
		cout<<"\n\t[1] With += Operator.";
		cout<<"\n\t[2] With -= Operator.";
		cout<<"\n\t[3] With *= Operator.";
		cout<<"\n\t[4] With /= Operator.";
		cout<<"\n\t[5] Exit";
		cout<<"\n\n\tEnter Your Choice :";
		cin>>ch;
		switch(ch)
		{
			case 1:
				t1+=t2;
				break;
			case 2:
				t1-=t2;
				break;
			case 3:
				t1*=t2;
				break;
			case 4:
				t1/=t2;
				break;
			case 5:
				exit(0);
				break;
			default:
				cout<<"\n\n\tInvalid Choice !!!";
		}
		getch();
	}
}