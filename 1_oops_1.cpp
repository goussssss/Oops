#include<iostream>
using namespace std;

class Student
{
  public:
    int roll_no;
    string name;
    string subject;
    int marks;
    
};

int main(){
  Student s1;
  s1.roll_no = 1; 
  s1.name = "John Doe";
  s1.subject = "Mathematics";
  s1.marks = 95;
  cout << "Roll No: " << s1.roll_no << endl;
  cout << "Name: " << s1.name << endl;    
  cout << "Subject: " << s1.subject << endl;
  cout << "Marks: " << s1.marks << endl;
}