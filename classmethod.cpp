#include <iostream>
using namespace std;

class Car{
    public:
            int speed(int maxspeed);
};

int Car :: speed(int maxSpeed) {
    return maxSpeed;
}

int main(){
    Car c1;
    cout<<c1.speed(200);

    return 0;
}
