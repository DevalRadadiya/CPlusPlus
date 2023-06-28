//Write a C++ program to print an American flag on the screen.

#include <iostream>
using namespace std;

int main(){
    cout<<"Print the American Flag..\n\n\n";

    for(int i=1;i<6;i++){
        cout<<"* * * * * ===================="<<endl;
    }
    for(int j=0;j<=5;j++){
        cout<<"=============================="<<endl;
    }
    return 0;
}
