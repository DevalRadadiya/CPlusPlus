// Write a program in C++ to check whether a number is positive, negative or zero

#include <iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter Number : ";
    cin>>x;

    if(x==0){
        cout<<"The number is Zero "<<x;
    }
    else if(x>0){
        cout<<"The number is positive "<<x;
    }
    else if(x<0){
        cout<<"The number is Negative "<<x;
    }
    else{
        cout<<"Invalid Number";
    }

    return 0;
}
