#include<iostream>
#include<vector>
using namespace std;

class Animal // Base class
{
  
  public:
    virtual void sound()// Virtual function
    {
      cout << "Animal makes sound" << endl;
    }
};


class Dog : public Animal // Derived class
{
  public:
    void sound() 
    {
      cout << "Dog barks" << endl;
    }
    
};
class Cat : public Animal // Derived class
{
  public:
    void sound() 
    {
      cout << "Cat mews" << endl;
    }
    
};

int main()
{
  Animal *animalPtr; // Base class pointer
  animalPtr = new Dog(); // Create a Dog object and assign it to the base class pointer
  animalPtr->sound(); 
  
  //this is similar to the above code 
  vector<Animal*> animals; // Vector of base class pointers
  animals.push_back(new Dog()); 
  animals.push_back(new Cat()); 
  animals.push_back(new Animal()); 
  animals.push_back(new Dog()); 
  animals.push_back(new Cat());

  for(int i=0; i<animals.size(); i++)
  {
    animalPtr=animals[i]; 
    animalPtr->sound(); 
  }


  

  
  return 0;
}



// virtual function tells compiler to use the derived class function instead of the base class function.
// virtual function is a member function in the base class that you expect to override in derived classes.
//This makes the class abstract, meaning you cannot instantiate it directly.

//           When we say "the base class cannot be instantiated on its own", we mean:
//           You cannot create an object directly from a class that has at least one pure virtual function — that class is abstract.


// comment-out ans see the below code
// class Animal {
//   public:
//       virtual void speak() = 0;  // Pure virtual function → makes Animal an abstract class
//   };
  
//   int main() {
//       Animal a;  // ❌ Error: cannot create an object of abstract class
//   }
  