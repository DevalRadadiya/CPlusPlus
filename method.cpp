#include <iostream>
using namespace std;

class myClass{
    public:
    void myMethod(){
        cout<<"Hello World";
    }
};

int main(){
    myClass mc;
    mc.myMethod();
    return 0;
}
