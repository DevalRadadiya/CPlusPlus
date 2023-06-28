#include<conio.h>
#include<iostream.h>
class Sum
{
	int a;
	public:
	void getData()
	{
		cout<<"\n\tEnter value :";
		cin>>a;
	}
	Sum compute(Sum s2,Sum s3)
	{
		s2.a=a+s2.a+s3.a;
		return s2;
	}
	void putData()
	{
		cout<<"\n\tSum = "<<a;
	}
};
void main()
{
	clrscr();
	Sum s1,s2,s3;
	s1.getData();
	s2.getData();
	s3.getData();
	s1=s1.compute(s2,s3);
	s1.putData();
	getch();
}