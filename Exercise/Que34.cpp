// Write a C++ program to display the current date and time.

#include <iostream>
#include <ctime>
#include <math.h>
using namespace std;

int main(){
    time_t t=time(NULL);
    tm* tsh=localtime(&t);

    cout<<"Display the current Date and Time : "<<endl<<endl;
    cout<<"Seconds = "<<tsh->tm_sec<<endl;
    cout<<"Minutes = "<<tsh->tm_min<<endl;
    cout<<"Hour = "<<tsh->tm_hour<<endl;
    cout<<"Time is   "<<(tsh->tm_hour)<<" : "<<(tsh->tm_min)<<" : "<<(tsh->tm_sec);

    cout<<"\n\nDay of Month : "<<(tsh->tm_mday)<<endl;
    cout<<"Month of Year : "<<(tsh->tm_mon)<<endl;
    cout<<"Year : "<<(tsh->tm_year)<<endl;
    cout<<"Weekday : "<<(tsh->tm_wday)<<endl;
    cout<<"Day of Year : "<<(tsh->tm_yday)<<endl;
    cout<<"\n\nDayLight Savings : "<<(tsh->tm_isdst)<<endl<<endl<<endl;

    cout<<"Current Date : "<<(tsh->tm_mday)<<"/"<<(tsh->tm_mon)+1<<"/"<<(tsh->tm_year)+1900<<endl;
    cout<<"Current Time : "<<(tsh->tm_hour)<<":"<<(tsh->tm_min)<<":"<<(tsh->tm_sec)<<endl;

    return 0;
}
