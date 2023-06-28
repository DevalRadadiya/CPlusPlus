//Write a C++ program to compute the quotient and remainder

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double result;
    int dividend,divisor,remainder;

    cout<<"Input the Dividend : ";
    cin>>dividend;
    cout<<"Input the divisor : ";
    cin>>divisor;

    result=dividend/divisor;
    remainder=dividend%divisor;

    cout<<"\nThe Quotient is : "<<result<<endl;
    cout<<"The Reminder is : "<<remainder;

    return 0;
}
