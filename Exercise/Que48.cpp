// Write a C++ program that swaps two variables without using a third variable.

#include <iostream>
using namespace std;

int main(){
    int n1,n2;
    cout<<"Input the first number : ";
    cin>>n1;
    cout<<"Input the second number : ";
    cin>>n2;
    n1=n1*n2;
    n2=n1/n2;
    n1=n1/n2;
    cout<<"\nAfter the swap number \n\tn1= "<<n1<<" \n\tn2= "<<n2;

    return 0;
}
