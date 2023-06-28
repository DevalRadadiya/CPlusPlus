// Write a program in C++ to test Type Casting.

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int i1=4,i2=8;

    cout<<"\nTest explicit type casting :\n";
    cout<<i1/i2<<endl;
    cout<<(double)i1/i2<<endl;
    cout<<i1/(double)i2<<endl;
    cout<<(double)(i1/i2)<<endl;

    cout<<"\nTest implicit type casting :\n" ;
    double d1=5.5,d2=6.6;
    cout<<(int)d1/i2<<endl;
    cout<<(int)(d1/i2)<<endl;

    cout <<"\n int implicitly casts to double: \n";
    d1=i1;
    cout<<d1<<endl;
    cout<<"double truncates to int!: \n";
    i2=d2;
    cout<<i2;

    return 0;
}
