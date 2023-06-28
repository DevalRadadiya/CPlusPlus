#include<iostream.h>
#include<conio.h>
void main()
{
	int x,y=0,rm,x1;
	clrscr();
	cout<<endl<<endl<<"Enter value : ";
	cin>>x;
	x1=x;
	while(x!=0)
	{
		rm=x%10;
		x=x/10;
		//cout<<rm;
		y=(y*10)+rm;
	}
	if(x1==y)
	{
		cout<<endl<<endl<<x1<<" is a palindrum no. ";
	}
	else
	{
		cout<<endl<<endl<<x1<<" is not a palindrum no. ";
	}
	getch();
}
