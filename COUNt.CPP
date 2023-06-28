#include<iostream.h>
#include<conio.h>
class Attendace
{
	private:
	static int count;
	public:
	void counter()
	{
		count++;
	}
	void display()
	{
		cout<<count;
	}
};
int Attendace::count;
void main()
{
	clrscr();
	Attendace a,b,c;
	a.counter();
	b.counter();
	c.counter();
	a.display();
	getch();
}