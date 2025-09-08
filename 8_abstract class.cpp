#include <iostream>
using namespace std;

// Abstract class
class Animal
{
public:
  virtual void sound() = 0; // Pure virtual function
};

class Dog : public Animal
{
public:
  void sound()
  {
    cout << "Dog barks!" << endl;
  }
};

class Cat : public Animal
{
public:
  void sound()
  {
    cout << "Cat meows!" << endl;
  }
};

int main()
{
  // Animal a;  // Error! Cannot instantiate abstract class
  Dog d;
  Cat c;

  Animal *ptr1 = &d;
  Animal *ptr2 = &c;

  ptr1->sound();
  ptr2->sound();

  return 0;
}
