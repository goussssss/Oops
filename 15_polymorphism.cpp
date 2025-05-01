#include<iostream>
using namespace std;

// polymorphism is a concept that allows us to perform a single action in different forms.
// ability of an entity to behave differently in different sinerioes.

//   compile time polymorphism is a type of polymorphism that is resolved during compile time.
//   --type of compile time polymorphism is -->function overloading and -->operator overloading.

//   runtime polymorphism is a type of polymorphism that is resolved during runtime.
//   --type of runtime polymorphism is -->virtual function.


//this is a simple example of compile time polymorphism using function overloading.
class Area
{ 

  public:

   
   int calculateArea(int r) // function to calculate area of circle
   {
     return 3*r*r;
   }
   int calculateArea(int l,int b) // function to calculate area of rectangle
   {
     return l*b;
   }

};

//if the function differ in the number of arguments or the type of arguments, then it is called function overloading.
//if the function differ in return type, then it is not called function overloading.
//if the function differ in order of arguments, then it is not called function overloading.

int main()
{
  Area a1;
  a1.calculateArea(5); // function to calculate area of circle
  cout<<"Area of circle is: "<<a1.calculateArea(5)<<endl;
  cout<<endl;
  a1.calculateArea(10,20); // function to calculate area of rectangle
  cout<<"Area of rectangle is: "<<a1.calculateArea(10,20)<<endl;
  
  return 0;
}