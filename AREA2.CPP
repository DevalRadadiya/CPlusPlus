#include<conio.h>
#include<iostream.h>
#include<process.h>
float area;
void Area(float side)
{
	area=side*side;
	cout<<"\n\n\tArea Of Square :"<<area;
}
void Area(float hight,float base)
{
	area=hight*base/2;
	cout<<"\n\n\tArea Of Triangle :"<<area;
}
void Area(int radius,float pi)
{
	area=pi*radius*radius;
	cout<<"\n\n\tArea Of Crircle :"<<area;
}
void main()
{
	int ch,radius;
	float hight,side,base;
	while(1)
	{
		clrscr();
		cout<<"\n\t[1] Circle.";
		cout<<"\n\t[2] Square.";
		cout<<"\n\t[3] Triangle.";
		cout<<"\n\t[4] Exit.";
		cout<<"\n\n\tEntre Your Choice :";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"\n\tEnter Radius :";
				cin>>radius;
				Area(radius,3.14);
				break;
			case 2:
				cout<<"\n\tEnter Base :";
				cin>>base;
				Area(base);
				break;
			case 3:
				cout<<"\n\tEnter Hight :";
				cin>>hight;
				cout<<"\n\tEnter Side :";
				cin>>side;
				Area(hight,side);
				break;
			case 4:
				exit(0);
			default:
				cout<<"\n\n\tInvalid Choice !!!";
		}
		getch();
	}
}