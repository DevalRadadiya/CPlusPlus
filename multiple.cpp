#include <iostream>
using namespace std;

class MyClass{
    public:
        void myFunction(){
            cout<<"Some content in Parent class \n";
        }
};

class MyOtherClass{
    public:
        void myOtherFunctiom(){
            cout<<"Some content in other class";
        }
};

class MyChildClass : public MyClass , public MyOtherClass{

};

int main(){
    MyChildClass mcc;
    mcc.myFunction();
    mcc.myOtherFunctiom();

    return 0;
}
