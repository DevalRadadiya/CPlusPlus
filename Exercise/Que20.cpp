// Write a C++ program to convert temperature in Celsius to Fahrenheit.

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double c,f;
    int a;
    cout<<"Which one is convert ";
    cout<<"Celsius to Fahrenheit or Fahrenheit to Celsius \nEnter your choice : ";
    cout<<"\nPress 1 for Celsius to Fahrenheit \nPress 2 for Fahrenheit to Celsius \n";
    cin>>a;

    switch(a){
        case 1:
            cout<<"Enter temperature in Celsius : ";
            cin>>c;
            cout<<"\nCelsius to Fahrenheit is ";
            f=(c*9/5)+32;
            cout<<"Fahrenheit is : "<<f;
            break;
        case 2:
            cout<<"Enter temperature in Fahrenheit : ";
            cin>>f;
            cout<<"\nFahrenheit to Celsius is ";
            c=(f-32)*5/9;
            cout<<"Celsius is : "<<c;
            break;
    }
    return 0;
}
