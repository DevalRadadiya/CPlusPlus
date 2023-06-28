#include<iostream.h>
#include<conio.h>
void main()
{
	int x,rm,y,sum=0,x1;
	clrscr();
	cout<<endl<<endl<<ends<<"Enter Value : ";
	cin>>x;
	x1=x;
	while(x!=0)
	{
		rm=x%10;
		x=x/10;
		y=rm*rm*rm;
		sum=sum+y;
	}
	if(x1==sum)
	{
		cout<<endl<<endl<<x1<<" it is an Armstrong no. ";
	}
	else
	{
		cout<<endl<<endl<<x1<<" it is not an Armstrong no.  ";
	}
	getch();
}







