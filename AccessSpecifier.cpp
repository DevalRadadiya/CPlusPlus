#include <iostream>
using namespace std;

class Employee{
    protected :
        int salary;
};

class Programmer :  public Employee {
    public :
        int bonus;
        void setSalary(int s){
            salary=s;
        }
        int getSalary(){
            return salary;
        }
};

int main(){
    Programmer p1;
    p1.setSalary(50000);
    p1.bonus=5000;
    cout<<"Salary : "<<p1.getSalary()<<"\n";
    cout<<"Bonus : "<<p1.bonus<<"\n";


    return 0;
}

