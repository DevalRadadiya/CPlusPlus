#include<conio.h>
#include<iostream.h>
class Iteam
{
  int iteam_no,price;
  char a[20];
  public:
  void getData();
  void display();
};
void Iteam ::getData()
 {
		cout<<endl<<"Enter iteam_no  :";
		cin>>iteam_no;
		cout<<endl<<"Enter Name  :";
		cin>>a;
		cout<<endl<<"Enter Price  :";
		cin>>price;
  }
 void Iteam ::display()
  {
		cout<<endl<<ends<< "roll_no :"<<iteam_no;
		cout<<endl<<ends<<"Name : "<<a;
		cout<<endl<<ends<<"Price : "<<price;
  }
void main()
{
	clrscr();
	Iteam x;
	x.getData();
	x.display();
	getch();
}