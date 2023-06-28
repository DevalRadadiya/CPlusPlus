// Write a C++ program to print the area and perimeter of a rectangle.

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double w,h=0,a,p,l;

    cout<<"Input the Width of a rectangle : ";
    cin>>w;
    cout<<"Input the Height of a rectangle : ";
    cin>>h;

    a=w*h;
    p=2*(w+h);

    cout<<"\n\nArea of Rectangle is "<<a<<endl;
    cout<<"Perimeter of Rectangle is "<<p;

    return 0;
}
