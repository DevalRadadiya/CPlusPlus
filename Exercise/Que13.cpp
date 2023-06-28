// Write a C++ program that swaps two numbers.

#include<iostream>
using namespace std;

int main(){
    int n1,n2,temp;
    cout<<"Enter n1 : ";
    cin>>n1;
    cout<<"Enter n2 : ";
    cin>>n2;
    temp=n2;
    n2=n1;
    n1=temp;
    cout <<"After swapping the 1st number is : "<< n1 <<"\n" ;
    cout <<"After swapping the 2nd number is : "<< n2 <<"\n" ;

    return 0;
}
