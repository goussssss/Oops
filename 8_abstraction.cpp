  #include <iostream>
  using namespace std;
  
  class Summation {    
    // abstraction is a concept of hiding the complex implementation details and showing only the essential features of the object.
    // It helps in reducing programming complexity and effort.
    // It allows the programmer to focus on the interactions at a higher level without needing to understand the underlying implementation.
  private:
    int a, b, c; 
  public:
    // In this example, we are using abstraction to hide the implementation details of the sum function.
    // The user of the class does not need to know how the sum is calculated; they just need to call the sum method with two integers.
    void sum(int x, int y)
    {
      a = x;
      b = y;
      c = a + b;
      cout<<"Sum of the two number is : "<<c<<endl;
    }
  };
  int main()
  {
    Summation s;
    s.sum(5, 4);
    return 0;
  }
  