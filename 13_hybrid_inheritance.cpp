#include <iostream>
using namespace std;

// Base class
class Person {
public:
    void displayPerson() {
        cout << "I am a Person" << endl;
    }
};

// Another class
class Worker{
  public:
      void displayWorker() {
          cout << "I am a Worker" << endl;
      }
  };

// Derived from Person
class Student : public Person {
public:
    void displayStudent() {
        cout << "I am a Student" << endl;
    }
};



// Hybrid class that inherits from both Student and Worker
class Intern : public Student, public Worker {
public:
    void displayIntern() {
        cout << "I am an Intern" << endl;
    }
};

int main() {
    Intern intern;
    intern.displayPerson();   // From Person (via Student)
    intern.displayStudent();  // From Student
    intern.displayWorker();   // From Worker
    intern.displayIntern();   // From Intern

    return 0;
}
