#include<iostream>
using namespace std;

class Student
{
  private:
    int roll_no;
    string name;
    string subject;
    int marks;

    public:
    // setter functions
    // setter functions are used to set the values of private data members
      void setRollNo(int r){
        roll_no = r;
      }
      void setName(string n){
        name = n;
      } 
      void setSubject(string s){
        subject = s;
      }
      void setMarks(int m){
        marks = m;
      }

      // getter functions
      // getter functions are used to get the values of private data members
      // they are used to access the private data members of the class
      int getRollNo(){
        return roll_no;
      }
      string getName(){
        return name;
      }
      string getSubject(){
        return subject;
      }
      int getMarks(){
        return marks;
      }

    
};

int main(){
  Student s1;
  //useing setter funcitons to set values
  s1.setRollNo(1);
  s1.setName("John Doe");
  s1.setSubject("Mathematics");
  s1.setMarks(95);
  //useing getter funcitons to get values
  cout << "Roll No: " << s1.getRollNo() << endl;
  cout << "Name: " << s1.getName() << endl;
  cout << "Subject: " << s1.getSubject() << endl;
  cout << "Marks: " << s1.getMarks() << endl;
  return 0;
 
}