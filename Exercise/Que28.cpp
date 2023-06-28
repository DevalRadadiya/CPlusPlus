// Write a C++ program to find the area of the Scalene Triangle.
//  A = (sqrt){[s*(s-a)*(s-b)*(s-c)]};

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    // s = semiperimeter a,b,c=side of triangle
    double s,a,b,c,A,PI=3.141595;

    cout<<"Find the area of Scalene Triangle \n";
    cout<<"Input the length of a side of the triangle : ";
    cin>>a;
    cout<<"Input the length of another side of the triangle : ";
    cin>>b;
    cout<<"Input the angle between these sides of the triangle : ";
    cin>>c;

    s=a+b+c/2;
    A=(sqrt(s*(s-a)*(s-b)*(s-c)));

    cout<<"\nArea of Scalene Triangle is "<<A;

    return 0;
}
