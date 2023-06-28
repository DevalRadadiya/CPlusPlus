#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
class Rectangle
{
	double width,length,area;
	public:
	void setData();
	void calculateArea();
	void display();
};
void Rectangle :: setData()
{
	cout<<endl<<ends<<"Enter Width : ";
	cin>>width;
	cout<<endl<<ends<<"Enter Length : ";
	cin>>length;
}
void Rectangle :: calculateArea()
{
	area=width*length;
}
void Rectangle :: display()
{
	cout<<"\n\tAREA OF RECTANGEL: "<<area;
}
void main()
{
	clrscr();
	Rectangle a;
	a.setData();
	a.calculateArea();
	a.display();
	getch();
}