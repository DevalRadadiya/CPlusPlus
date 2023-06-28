#include<iostream.h>
#include<conio.h>
class test
{
	private :
	static int a ;
	public :
	static	void getdata()
	{
	  //	cout<<endl<<ends<<"Enter a value : ";
	  //	cin>>a;
	}
	static	void display()
	{
		a++;
	  cout<<endl<<ends<<a;
	}
};
int test :: a;
void main()
{
	 clrscr();
	 test t;
	 t.getdata();
	 test::display();
	 t.display();
	 getch();
}