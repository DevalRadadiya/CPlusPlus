// Write a program in C++ that converts kilometers per hour to miles per hour.

#include <iostream>
//#include <math.h>
using namespace std;

int main(){
    double km,mile;
    int c;
    cout<<"Which you want to convert..\nKm to Mile or Mile to Km per hour";
    cout<<"\nEnter your choice \nPress 1 for Km per hour to Mile and press 2 for Mile to Km per hour : ";
    cin>>c;

    switch(c) {
        case 1:
            cout<<"\nEnter Keloneter : ";
            cin>>km;
            cout<<"\nKelometer to Mile per hour is "<<km*0.621<<" mi/hr";
            break;

        case 2:
            cout<<"\nEnter Mile : ";
            cin>>mile;
            cout<<"\nMile to Kelometer per hour is "<<mile*1.61<<" km/hr";
            break;
    }

    return 0;
}
