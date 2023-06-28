// Write a C++ program that accepts the user's first and last name and prints them in reverse order with a space between them.

#include <iostream>
using namespace std;

int main(){
    string fn,ln;
    cout<<"Enter FirstName : ";
    cin>>fn;
    cout<<"Enter LastName : ";
    cin>>ln;

    cout<<"\nName in reverse is : "<<ln<<" "<<fn;

    return 0;
}
