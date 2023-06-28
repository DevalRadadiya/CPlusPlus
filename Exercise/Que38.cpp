// Write a C++ program that takes a number as input and prints its multiplication table up to 10.

#include <iostream>
using namespace std;

int main(){
    int i,j,k;

    cout<<"Enter Number if you want to print table : ";
    cin>>j;
    for(i=1;i<=10;i++){
        k=i*j;
        cout<<j<<" * "<<i<<" = "<<k<<endl;
    }
    return 0;
}
