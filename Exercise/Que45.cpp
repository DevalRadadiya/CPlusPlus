// Write a C++ program to calculate the volume of a cone.

#include <iostream>
using namespace std;

int main(){
    double volume,radius,height,pie=3.14;

    cout<<"Input Radius of cone : ";
    cin>>radius;
    cout<<"Input Height of cone : ";
    cin>>height;

    volume=(pie*radius*radius*height)/3;

    cout<<"The Volume of Cone is "<<volume;

    return 0;
}
