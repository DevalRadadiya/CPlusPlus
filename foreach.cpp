#include <iostream>
using namespace std;

int main(){
    int myNumbers[10]={10,20,30,40,50,60,70,80,90,100};
    for(int i : myNumbers){
        cout<<i<<"\n";
    }
    return 0;
}
