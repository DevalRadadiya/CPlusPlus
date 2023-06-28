// Write a program in C++ to convert temperature in Kelvin to Fahrenheit.

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int ch;
    double temp,kel,fah,cel;

    cout<<"Enter Your Choice \n\t Which you want to convert \n Press 1 for Kelvin to Fahrenheit \n Press 2 for Kelvin to Celsius \n Press 3 for Fahrenheit to Kelvin  \n Press 4 for Celsius to Kelvin : \n";
    cin>>ch;

    switch(ch) {
        case 1:
            cout<<"\nKelvin to Fahrenheit";
            cout<<"\nEnter temperature in Kelvin : ";
            cin>>kel;
            fah=(kel-273.15)*9/5+32;
            cout<<"\nKelvin to Fahrenheit is : "<<fah;
            break;

        case 2:
            cout<<"\nKelvin to Celsius";
            cout<<"\nEnter temperature in Kelvin : ";
            cin>>kel;
            cel=kel-273.15;
            cout<<"\nKelvin to Celsius is : "<<cel;
            break;

        case 3:
            cout<<"\nFahrenheit to Kelvin";
            cout<<"\nEnter temperature in Fahrenheit : ";
            cin>>fah;
            kel = (fah - 32) * (5/9) + 273.15;
            cout<<"\nFahrenheit to Kelvin is : "<<kel;
            break;

        case 4:
            cout<<"\nCelsius to Kelvin";
            cout<<"\nEnter Temperature in Celsius : ";
            cin>>cel;
            kel=cel+273.15;
            cout<<"\nCelsius to Kelvin is : "<<kel;
            break;
    }

    return 0;
}
