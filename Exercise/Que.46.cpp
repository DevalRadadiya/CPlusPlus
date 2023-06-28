// Write a C++ program to calculate the volume of a cylinder.

#include <iostream>
using namespace std;

int main(){
    double volume,radius,height,pie=3.14;

    cout<<"Enter Radius of Cylinder : ";
    cin>>radius;
    cout<<"Enter Height if Cylinder : ";
    cin>>height;

    volume=pie*radius*radius*height;

    cout<<"Volume of Cylinder is : "<<volume;

    return 0;
}
