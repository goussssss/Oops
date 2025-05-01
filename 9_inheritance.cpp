#include<iostream>
using namespace std;

//Inheritance is a mechanism in which one class acquires the properties (methods and fields) of another class.
// It allows for code reusability and establishes a relationship between classes.
// The derived class can add its own members and can also override the base class members if needed.
// Inheritance allows for a hierarchical classification of classes, enabling the creation of more specific classes based on general ones.
// It promotes code reusability and can lead to a more organized and manageable code structure.
// Inheritance can be single, multiple, hierarchical, multilevel, or hybrid.
// Single inheritance involves one base class and one derived class. Multiple inheritance involves one derived class inheriting from multiple base classes. 
//Hierarchical inheritance involves multiple derived classes inheriting from a single base class. Multilevel inheritance involves a chain of classes where a derived class is also a base class for another derived class.
// Hybrid inheritance is a combination of two or more types of inheritance.
// Inheritance can be public, protected, or private.


//protected access modifier allows inheritence while following encapsulation.

class Human
{
  private:
    string color; // Private member, not accessible outside the class
    string grade;
  protected:
    string name;
    int age;
    int weight;

};

// Public inheritance means that the public members of the base class remain public in the derived class, and the protected members of the base class remain protected in the derived class.
// Protected inheritance means that the public members of the base class become protected members of the derived class, and the protected members of the base class remain protected in the derived class.
// Private inheritance means that the public and protected members of the base class become private members of the derived class.

class Student: private Human // Private inheritance means that the public and protected members of the base class become private members of the derived class.
{
  private:
    int rollNumber;
    int fee;
    static int count; // Static data member to keep track of the number of students
  public:
    Student(string name,int age,int weight,int rollNumber,int fee){
      this->name=name;
      this->age=age;
      this->weight=weight;
      this->rollNumber=rollNumber;
      this->fee=fee;
      count++; 
    }

    void display(){
      cout<<"Name: "<<name<<endl;
      cout<<"Age: "<<age<<endl;
      cout<<"Weight: "<<weight<<endl;
      cout<<"Roll Number: "<<rollNumber<<endl;
      cout<<"Fee: "<<fee<<endl;
      cout<<"------------------------"<<endl;
    }

    static int getCount() {
      return count; 
    }
    

  
};

class Teacher:private Human
{
  private:
    int employeeId;
    string subject;
    static int count; // Static data member to keep track of the number of teachers
  public:
    Teacher(string name,int age,int weight,int employeeId,string subject){
      count++;
      this->name=name;
      this->age=age;
      this->weight=weight;
      this->employeeId=employeeId;
      this->subject=subject;
    }

    void display(){
      cout<<"Name: "<<name<<endl;
      cout<<"Age: "<<age<<endl;
      cout<<"Weight: "<<weight<<endl;
      cout<<"Employee ID: "<<employeeId<<endl;
      cout<<"Subject: "<<subject<<endl;
      cout<<"------------------------"<<endl;
    }
    static int getCount() {
      return count; 
    }
};  

int Student::count = 0; // Initialize static member count to 0
int Teacher::count = 0; 

int main(){
  Student s1("John Doe", 20, 70, 101, 5000);
  Student s2("Jane Smith", 22, 60, 102, 6000);
  s1.display();
  s2.display();
  cout<<"Total number of students: "<<Student::getCount()<<endl; // Accessing static member function using class name
  cout<<endl;
  cout<<endl;  
  Teacher t1("Alice Johnson", 35, 65, 201, "Mathematics");
  Teacher t2("Bob Brown", 40, 75, 202, "Physics");
  Teacher t3("Charlie Green", 45, 80, 203, "Chemistry");
  t1.display();
  t2.display();
  t3.display();
  cout<<endl;
  cout<<"Total number of teachers: "<<Teacher::getCount()<<endl; // Accessing static member function using class name

  
  return 0;
  

}
