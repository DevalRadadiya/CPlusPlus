#include <iostream>
using namespace std;

class MyClass{
    public :
        void myMethod();
};

void MyClass::myMethod(){
    cout<<"Deval";
}

int main(){
    MyClass mc;
    mc.myMethod();

    return 0;
}

