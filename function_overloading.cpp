#include <iostream>
using namespace std;

int addition(int x,int y){
    return x+y;
}
double addition(double x,double y){
    return x+y;
}

int main(){
    int num1=addition(8,5);
    double num2=addition(10.2323,11.12345);

    cout<<num1<<"\n";
    cout<<num2;
    return 0;
}
