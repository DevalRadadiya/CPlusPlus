#include <iostream>
using namespace std;

class MyClass{
    public:
        int myNum;
        string myString;
};

int main(){
    MyClass mc;
    mc.myNum=10;
    mc.myString="Deval";

    cout<<mc.myNum<<"\n";
    cout<<mc.myString;

    return 0;
}
