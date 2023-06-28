//Write a C++ program to compute the total and average of four numbers.

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a,b,c,d;
    double total,average;
    cout<<"Input the First number : ";
    cin>>a;
    cout<<"Input the First number : ";
    cin>>b;
    cout<<"Input the First number : ";
    cin>>c;
    cout<<"Input the First number : ";
    cin>>d;

    total=a+b+c+d;
    average=total/4;

    cout<<"\nThe Total is "<<total;
    cout<<"\nThe average is "<<average;

    return 0;
}
