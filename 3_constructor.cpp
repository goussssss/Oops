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
    ///constructor has 4 types
    //      -->default constructor
    //      -->parameterized constructor
    //      -->inline constructor
    //      -->copy constructor
    //all the constructors dosent have return type
    //automatically called at the time of object creation

    //default constructor
    Student(){  //this default constructor dosent have return type
      cout << "Default constructor called" << endl;
      roll_no = 0;      //used to inetialize the value of objects or sets default values; 
      name = "Unknown";
      subject = "Unknown";
      marks = 0;
    }
    
    // //parameterized constructor
    // Student(int r, string n, string s, int m){ 
    //   cout << "Parameterized constructor called" << endl;
    //   this->roll_no = r;                                         //used to inetialize the value of objects or sets default values; 
    //   this->name = n;
    //   this->subject = s;
    //   this->marks = m;
    // }

    //inline constructor
    inline Student(int r, string n, string s, int m): roll_no(r), name(n), subject(s), marks(m){
      cout << "Inline constructor called" << endl;
    }

    //copy constructor
    Student(const Student &s){                               
      cout << "Copy constructor called" << endl;
      roll_no = s.roll_no;       
      name = s.name;
      subject = s.subject;
      marks = s.marks;
    }


    void display(){
      cout << "Roll No: " << roll_no << endl;
      cout << "Name: " << name << endl;    
      cout << "Subject: " << subject << endl;
      cout << "Marks: " << marks << endl;
    }
    
};

int main(){
  Student s1;                                                             // This will call the default constructor   // default constructor called autometically


  // Creating an object with the parameterized constructor
  Student s2(1, "John", "Math", 90);                                      // This will call the parameterized constructor
  //user has to calls the parameterized constructor explicitly


  // Displaying the values of the objects 
  cout << "Object 1:" << endl;
  s1.display();                                                           // This will call the display function of the object s1 
  cout << endl;
  cout << "Object 2:" << endl;
  s2.display();                                                           // This will call the display function of the object s2
  cout << endl;


  Student s3(s2);                                                         // This will call the copy constructor
  cout << "Object 3:" << endl;
  s3.display();                                                           // This will call the display function of the object s3

 
}