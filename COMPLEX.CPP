#include<iostream.h>
#include<conio.h>
class complex
{
	private :
	int real,image;
	public :
	void  getdata()
	{
		cout<<endl<<ends<<"Enter real : ";
		cin>>real;
		cout<<endl<<ends<<"Enter image : ";
		cin>>image;
	}
	void putdata()
	{
		cout<<endl<<endl<<real<<"  + i"<<image;
	}
	complex sum (complex x2)
	{
		x2.real=real+x2.real;
		x2.image=image+x2.image;
		return x2;
	}
};
void main()
{
	clrscr();
	complex x1,x2;
	x1.getdata();
	x2.getdata();
	x2=x1.sum(x2);
	x2.putdata();
	getch();
}

