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

class Engineer
{
  protected:
    string specialization;

  public:
    void work(){
      cout << "I have specilization in " << specialization << endl;
    }

};


// In this example, SoftwareEngineer inherits from both Engineer and Person classes.
// This means that SoftwareEngineer has access to the members of both Engineer and Person classes.
// Multiple inheritance allows a derived class to inherit from more than one base class, enabling the derived class to have members from multiple classes.

class SoftwareEngineer: public Engineer, public Person // Multiple inheritance
{
  protected:
    string programmingLanguage;

  public:
    SoftwareEngineer(string name, string specialization, string programmingLanguage){
      this->name=name;
      this->specialization=specialization;
      this->programmingLanguage=programmingLanguage;
    }
    void code(){
      cout << "I am work in " << programmingLanguage << endl;
    }
    void introduce(){
      cout<<"introduce function..."<<endl;
      MyName();
      work();
      code();
      cout<<"-------------------------"<<endl;
    }
};

int main(){
  SoftwareEngineer s1("Alice", "Software Engineering", "C++");
  s1.MyName();
  s1.work();
  s1.code();
  cout<<endl;
  cout<<endl;
  s1.introduce();
  cout<<endl;
  
  SoftwareEngineer s2("John Doe", "Embedded systems", "assambly");
  s2.MyName();
  s2.work();
  s2.code();
  cout<<endl;
  cout<<endl;
  s2.introduce();

  return 0;
}
