// Write a C++ program to print the code (ASCII code / Unicode code etc.) of a given character.

#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Input Character : ";
    cin>>ch;

    cout<<"\nThe ASCII value of "<<ch<<" is : "<<(int)ch<<endl;
    cout<<"\nThe Character for the ASCII value "<<(int)ch<<" is : "<<(char)(int)ch<<"\n\n";

    return 0;
}
