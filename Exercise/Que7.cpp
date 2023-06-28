// Write a C++ program that displays mixed data types and arithmetic operations.

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a1=5,a2=7;
    double d1=3.7,d2=8.0;

    cout << "\n\n Display arithmetic operations with mixed data type :\n";
	cout << "---------------------------------------------------------\n";
    cout << fixed << setprecision(1);

    cout <<" "<< a1 << " + " << a2 << " = " << a1+a2 << endl;
    cout <<" "<< d1 << " + " << d2 << " = " << d1+d2 << endl;
    cout <<" "<< a1 << " + " << d2 << " = " << a1+d2 << endl;

    cout <<" "<< a1 << " - " << a2 << " = " << a1-a2 << endl;
    cout <<" "<< d1 << " - " << d2 << " = " << d1-d2 << endl;
    cout <<" "<< a1 << " - " << d2 << " = " << a1-d2 << endl;

    cout <<" "<< a1 << " * " << a2 << " = " << a1*a2 << endl;
    cout <<" "<< d1 << " * " << d2 << " = " << d1*d2 << endl;
    cout <<" "<< a1 << " * " << d2 << " = " << a1*d2 << endl;

    cout <<" "<< a1 << " / " << a2 << " = " << a1/a2 << endl;
    cout <<" "<< d1 << " / " << d2 << " = " << d1/d2 << endl;
    cout <<" "<< a1 << " / " << d2 << " = " << a1/d2 << endl;
    cout << endl;

    return 0;
}
