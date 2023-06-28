#include <iostream>
#include <string>
using namespace std;

class Car {
    public:
        string brand;
        string model;
        int year;
};

int main(){
    Car c1;
    c1.brand="BMW";
    c1.model="X5";
    c1.year=1999;

    Car c2;
    c2.brand="Ford";
    c2.model="Mustang";
    c2.year=1969;

    cout<<c1.brand<<" "<<c1.model<<" "<<c1.year<<"\n";
    cout<<c2.brand<<" "<<c2.model<<" "<<c2.year<<"\n";

    return 0;
}
