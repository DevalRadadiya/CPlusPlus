//Write a C++ program to display the operation of pre and post increment and decrement.

#include <iostream>
using namespace std;

int main(){
    int num=57;

    cout<<"After post increment by 1 the number is : "<<++num<<endl;
    cout<<"After pre increment by 1 the number is : "<<num++<<endl;
    cout<<"After increasing by 1 the number is : "<<num+1<<endl;
    cout<<"After post decrement by 1 the number is : "<<num-1<<endl;
    cout<<"After pre decrement by 1 the number is : "<<--num<<endl;
    cout<<"After decreasing by 1 the number is : "<<num--<<endl;

    return 0;
}
