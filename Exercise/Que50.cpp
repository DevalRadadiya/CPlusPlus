// Write a C++ program to enter length in centimeters and convert it into meters and kilometers.

#include <iostream>
using namespace std;

int main(){
    double centimeter,meter,kilometer;
    cout<<"Convert centimeter into meter and kilometer : \n --------------------------------------------------\n";
    cout<<"Input the distance in centimeter : ";
    cin>>centimeter;
    meter=centimeter/100;
    kilometer=centimeter/100000;

    cout<<"\nCentimeter into Meter is : "<<meter;
    cout<<"\nCentimeter into kilometer is : "<<kilometer;

    return 0;
}
