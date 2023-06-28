#include<conio.h>
#include<iostream.h>
class student
{
  int roll_no;
  char a[20];
  public:
  void getdata()
  {
	cout<<endl<<"Enter roll_no  :";
	cin>>roll_no;
	cout<<endl<<"Enter Name  :";
	cin>>a;
  }
  void display()
  {
		cout<< "roll_no  :"<<roll_no;
		cout<<endl<<"Name : "<<a;
  }
};
void main()
{
	clrscr();
	student s,s1;
	s.getdata();
	s.display();
	s1.getdata();
	s1.display();
  //	s.roll_no =10;
	getch();
}