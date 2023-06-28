#include<conio.h>
#include <iostream.h>
class Attend
{
	static int count;
	public:
	void counter()
	{
	    count++;
	}
	void display()
	{
	    cout<<count<<" ";
	}
};
int Attend :: count;
int main()
{
	clrscr();
	Attend a,b,c;
	a.counter();
	b.counter();
	c.counter();
	b.display();
	getch();
	return 0;
}

