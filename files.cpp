#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {

  ofstream MyWriteFile("filename.txt");

  MyWriteFile << "Hello, My name is Deval. I am learning C++..";

  MyWriteFile.close();

  string myText;

  ifstream MyReadFile("filename.txt");

  while (getline (MyReadFile, myText)) {
    cout << myText;
  }

  MyReadFile.close();
}
