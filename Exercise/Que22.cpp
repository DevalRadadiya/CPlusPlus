//  Write a C++ program to find the third angle of a triangle.

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double ang1,ang2,ang3;
    cout<<"Input the first angle of triangle : ";
    cin>>ang1;
    cout<<"Input the second angle of triangle : ";
    cin>>ang2;

    ang3=180-(ang1+ang2);

    cout<<"\nThird Angle of Triangle is : "<<ang3;

    return 0;
}
