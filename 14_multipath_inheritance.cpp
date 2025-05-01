#include <iostream>
using namespace std;


// In this case, both Student and Worker inherit from Person
// and Intern inherits from both Student and Worker.

// Base class
class Person {
public:
    void displayPerson() {
        cout << "I am a Person" << endl;
    }
};

// Another class
// Using virtual inheritance to avoid ambiguity
// when multiple paths lead to the same base class
// This is useful in hybrid inheritance scenarios where multiple paths lead to the same base class.
// It ensures that only one instance of the base class is created, preventing ambiguity and redundancy.
// It helps to maintain a single instance of the base class, reducing memory usage and potential conflicts in member access.
// It is important to note that virtual inheritance can introduce some complexity in the class hierarchy and may require careful design to avoid issues such as the diamond problem, where a derived class inherits from two classes that both inherit from a common base class.
// In such cases, virtual inheritance can help to resolve ambiguity and ensure that the derived class has a single instance of the base class.
class Worker: virtual public Person{ 
  public:
      void displayWorker() {
          cout << "I am a Worker" << endl;
      }
  };  

// Derived from Person
class Student : virtual public Person {
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

// example 
// base class A
// class B ans class C both inherit from A
// and class D inherits from both B and C

// Why ambiguous?
// Because D inherits two copies of A: one through B, one through C. So the compiler doesn't know which

//Only create one shared copy of this base class, even if it’s inherited along multiple paths

// In virtual inheritance, only one copy of the base class (e.g. A) is created,
//         and the intermediate classes (e.g. B and C) point to that shared copy.



// without virtual inheritance:
//                    A        A 
//                    ↑        ↑
//                    B        C     this is why ambiguous
//                     \      /      this is the diamond shape
//                      \    /
//                        D          Because D inherits two copies of A: one through B, one through C. So the compiler doesn't know which

// with virtual inheritance:
//                        A
//                      ↗   ↖            B and C both point to the same A
//                     B      C          ✅ D has one shared A, no ambiguity
//                      \    /
//                         D



//     in virtual inheritance, the derived classes (B and C) do not contain their own full copies of the base class (A), 
//     but instead they effectively hold a reference or pointer to a shared instance of A.


//      Ambiguity 
//      Ambiguity in C++ refers to a situation where the compiler cannot determine which class member (function or variable) to use 
//      because multiple candidates are accessible with the same name, and there's no clear resolution.


//     🧠 In Simple Terms:
//     Ambiguity occurs when the compiler is confused about which version of a function or variable you're trying to access.



//    Ambiguity = Compiler confusion due to multiple matching choices with no clear preference.
