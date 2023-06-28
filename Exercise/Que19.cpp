// Write a C++ program to find the area and circumference of a circle.

#include <iostream>
#include <math.h>
using namespace std;

int main(){
   double r,pie,area,circu;
   pie=3.14;

   cout<<"Enter the Radius of Circle : ";
   cin>>r;

   area=pie*r*r;
   circu=2*pie*r;

   cout<<"\nArea of circle is : "<<area<<endl;
   cout<<"Circumference of circle is : "<< circu;

   return 0;
}
