//Write a C++ program that calculates the volume of a sphere.

#include <iostream>
using namespace std;

int main(){
    int r;
    double pie=3.14,v;
    cout<<"Input the Radius : ";
    cin>>r;
    v=(4*pie*r*r*r)/3;
    cout<<"\nVolume of a sphere is : "<<v;
    return 0;
}
