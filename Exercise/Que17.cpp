// Write a C++ program to find the Area and Perimeter of a Rectangle.

#include <iostream>
using namespace std;

int main(){
    double area,perimeter,length,width;
    cout<<"Enter length : ";
    cin>>length;
    cout<<"Enter widht : ";
    cin>>width;
    perimeter=2*length+2*width;
    area=length*width;
    cout<<"\nPerimeeter is "<<perimeter;
    cout<<"\nArea is "<<area;

    return 0;
}
