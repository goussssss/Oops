#include<iostream>
#include<fstream>
using namespace std;

int main(){
  ifstream file;
  file.open("file_1_write.txt"); // open the file in write mode
  char c;
  c=file.get(); // read the first character from the file
  while(!file.eof()){
    cout<<c; // read from the file
    c=file.get(); // read the next character from the file
  }
  file.close(); // close the file
  return 0; // return 0 to indicate success
}