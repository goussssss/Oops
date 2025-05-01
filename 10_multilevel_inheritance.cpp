#include<iostream>
using namespace std;

class Person
{
  protected:
    string name;
    
  public:

   void MyName(){
      cout<<"Hello, my name is "<<name<<endl;
   }
      
};

class Employee: public Person
{
  protected:
    int employeeId;
    
  public:
    
    void displayEmployeeId(){
      cout<<"Employee ID: "<<employeeId<<endl;
    }
};

class Manager: public Employee
{
  protected:
    string department;
    
  public:

    Manager(string name, int employeeId, string department){
      this->name=name;
      this->employeeId=employeeId;
      this->department=department;
    }
    void introduce(){
      cout<<"Hello, my name is "<<name<<", I am a manager."<<endl;
    }

    
    void displayDepartment(){
      cout<<"Department: "<<department<<endl;
    }
};
   


int main(){
  Manager m("Alice", 101, "Sales");
  m.introduce();
  m.displayEmployeeId();
  m.displayDepartment();
  m.MyName();


  return 0;
}
