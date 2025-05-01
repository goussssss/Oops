#include<iostream>
using namespace std;

class Student
{
    private:
    int roll_no;
    int *ptr;

    public: 

    //default constructor
    Student(){  
      cout << "Default constructor called" << endl;
      roll_no = 0;    
      ptr = new int(0);
     
    }
    
    //parameterized constructor
    Student(int r, int m){ 
      cout << "Parameterized constructor called" << endl;
      this->roll_no = r;                                         
      ptr = new int;                    //  or ptr=new int(m);
      *ptr = m;                        // dynamically allocated memory for marks

    }

    //destructor
    //it dosen't delete the object but free the dynamically allocated memory to the object
    //it is called automatically when the object goes out of scope or is deleted
    //it is used to free the dynamically allocated memory to the object
    //we dont have to call the destructor explicitly, it is called automatically
    ~Student(){                                 
      delete ptr; // free the dynamically allocated memory
      cout << "Destructor called" << endl;
    }

    void display(){
      cout << "Roll No: " << roll_no << endl;
      cout<< "Marks: " << *ptr << endl;
      
    }
    
};

int main(){
  Student s1;                                                             


  
  Student s2(1, 90);                                      // This will call the parameterized constructor


  // Displaying the values of the objects 
  cout << "Object 1:" << endl;
  s1.display();                                                           
  cout << endl;
  cout << "Object 2:" << endl;
  s2.display();                                                           
  cout << endl;


                                                            

 
}