#include<iostream>
using namespace std;

class Complex
{
  private:
    int real;
    int imag;
  public:
    Complex(int real, int imag) // constructor with default values
    {
      this->real = real;
      this->imag = imag;
    }

    
    Complex() // default constructor
    {
      
    }
    
    Complex operator + (Complex &C2) // operator overloading for + operator
    {
      Complex res;
      res.real = real + C2.real;
      res.imag = imag + C2.imag;
      return res;
    }
    
    void display()
    {
      cout << real << " + " << imag << "i" << endl;
    }

};


int main()
{
  Complex c1(10, 5); // creating object of Complex class
  Complex c2(2, 4); // creating object of Complex class

  //c2 is passad as parameter to the operator + function.
  Complex c3 = c1 + c2; // using operator overloading to add two complex numbers
  //similar to c3 = c1.operator+(c2);
  //c1 is the calling object and c2 is the parameter object.
  
  cout << "c1 = ";
  c1.display(); 
  
  cout << "c2 = ";
  c2.display(); 

  cout << "c3 = ";
  c3.display(); // displaying the value of c3
  
  return 0;
}
// In this example, we have overloaded the + operator to add two complex numbers.