// Write a C++ program that checks whether primitive values cross the limit.

#include <iostream>
using namespace std;

int main(){
    cout<<"Check whether the primitive values crossing the limits or not : "<<endl<<endl;
    char gender='F';
    bool isMarried=true;
    unsigned short sons=2;
    short appoinment=2009;
    long int package=1500000;
    double height=79.48;
    float gpa=4.69;
    long salary=12047235L;
    long long balance=995324987LL;

    cout<<"The Gender is : "<<gender<<endl;
    cout<<"Is she married? : "<<isMarried<<endl;
    cout<<"Number of sons she has : "<<sons<<endl;
    cout<<"Year of her appointment : "<<appoinment<<endl;
    cout<<"Salary for a year : "<<package<<endl;
    cout<<"Height is : "<<height<<endl;
    cout<<"GPA is "<<gpa<<endl;
    cout<<"Salary drawn upto : "<<salary<<endl;
    cout<<"Balance till : "<<balance<<endl;

    return 0;
}
