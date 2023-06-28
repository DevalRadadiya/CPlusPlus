// Write a C++ program that calculates the volume of a cylinder.

#include <iostream>
using namespace std;

void main(){
    double radius,height,volume,pie=3.14;

    cout<<"Enter Cylinder radius(r) : ";
    cin>>radius;
    cout<<"Enter Cylinder height(h) : ";
    cin>>height;
    volume=pie*radius*radius*height;
    cout<<"\nThe volume of cylinder is : "<<volume;


}
