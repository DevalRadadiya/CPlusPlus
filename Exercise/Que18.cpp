// Write a C++ program to find the area of any triangle using Heron's formula.

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    //s=semi perimeter,a=b=c=side of triangle
   double s,s1,s2,s3,area;
   cout<<"Enter the a side of Triangle : ";
   cin>>s1;
   cout<<"Enter the b side of Triangle : ";
   cin>>s2;
   cout<<"Enter the c side of Triangle : ";
   cin>>s3;
   s=(s1+s2+s3)/2;
   area=sqrt(s*(s-s1)*(s-s2)*(s-s3));

   cout<<"\nArea of triangle is : "<<area;

   return 0;
}
