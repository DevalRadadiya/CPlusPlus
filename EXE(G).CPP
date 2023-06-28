#include<conio.h>
#include<iostream.h>
void main()
{
	long long int rm,a,sum=0;
	clrscr();
	cout<<endl<<ends<<"Enter Number :";
	cin>>a;
	while(a!=0)
	{
		rm=a%10;
		a=a/10;
		sum=sum+rm;
	}
	cout<<endl<<ends<<"ADDTION : "<<sum;
	getch();
}