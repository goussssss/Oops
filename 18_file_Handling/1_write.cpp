#include<iostream>
#include<fstream>
using namespace std;

int main(){
  ofstream file;
  file.open("file_1_write.txt"); // open the file in write mode
  file<<"Hello from C++"; // write to the file
  file.close(); // close the file
  return 0; // return 0 to indicate success
}