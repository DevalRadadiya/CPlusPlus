#include<iostream.h>
#include<conio.h>
class Complex2;
class Complex1
{
	int a,b;
	public:
	void getData()
	{
		cout<<"\n\tEnter Real Number :";
		cin>>a;
		cout<<"\n\tEnter Image Number :";
		cin>>b;
	}
	void putData()
	{
		cout<<"\n\t"<<a<<" + i"<<b;
	}
	friend Complex1 compute(Complex1,Complex2);
};
class Complex2
{
	int a,b;
	public:
	void getData()
	{
		cout<<"\n\tEnter Real Number :";
		cin>>a;
		cout<<"\n\tEnter Image Number :";
		cin>>b;
	}
	friend Complex1 compute(Complex1,Complex2);
};
Complex1 compute(Complex1 c1,Complex2 s2)
{
	c1.a=c1.a+s2.a;
	c1.b=c1.b+s2.b;
	return c1;
}
void main()
{
	clrscr();
	Complex1 c1;
	Complex2 s2;
	c1.getData();
	s2.getData();
	c1=compute(c1,s2);
	c1.putData();
	getch();
}