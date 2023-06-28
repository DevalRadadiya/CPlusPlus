#include<iostream.h>
#include<conio.h>
void area( float base , float height)
{
	float a;
	a=0.5*base*height;
	cout<<endl<<ends<<"Area of Triangle :"<<a;
}
void area (int lenght)
{
	int b;
	b=4*lenght;
	cout<<endl<<ends<<"Area of Square : "<<b;
}
void area ( float redius)
{
	float c;
	c=3.14*redius*redius;
	cout<<endl<<ends<<"Area of Circle : "<<c;
}
void main()
{
	clrscr();
	int x,lenght;
	float redius,base,height;
	cout<<"1.Triangle : ";
	cout<<"2.Square   :";
	cout<<"3.Circle   :";
	cout<<" Enter your choice :" ;
	cin>>x;
	switch (x)
	{
			case 1 :
				cout<<"Enter base :";
				cin>>base;
				cout<<"Enter height :";
				cin>>height;
				area(base,height);
				break;

		case 2 :
				cout<<"Enter lenght :";
				cin>>lenght;
				area(lenght);
				break;

		case 3 :
				cout<<"Enter redius : ";
				cin>>redius;
				area(redius);
				break;
	}
	getch();
}

