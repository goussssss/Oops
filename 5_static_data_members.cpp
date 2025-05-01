#include<iostream>
using namespace std;

class Costumer
{
  private:
    string name;
    int accountNumber;
    int balance;
    static int count; // Static data member to keep track of the number of customers
    // It is shared among all instances of the class.
    //Static members belong to the class itself, not to any specific object.
    //for every class, there is only one copy of the static member, regardless of how many objects are created.

  public:
    Costumer(){
      count++; // Increment the count whenever a new customer is created
      name = "Unknown";
      accountNumber = 0;
      balance = 0;
    }


    Costumer(string n, int a, int b){
      name = n;
      accountNumber = a;
      balance = b;
      count++; // Increment the count whenever a new customer is created
    }

    


    void display(){
      cout << "Name: " << name << endl;
      cout << "Account Number: " << accountNumber << endl;
      cout << "Balance: " << balance << endl;
      cout << "------------------------" << endl;
    }

    // Static member function to access the static member count
    // Static member functions can only access static members of the class.
    //they can not access non-static members of the class.
    static int getCount() {
      return count; 
    }

};

int Costumer::count = 0; // Initialize static member count to 0
// Static member count is initialized outside the class definition.

int main(){
  Costumer c1;
  Costumer c2("John Doe", 12345, 1000);
  Costumer c3("Jane Smith", 67890, 2000);
  Costumer c4("Alice Johnson", 54321, 1500);
  c1.display();
  cout<<endl;
  c2.display();
  cout<<endl;
  c3.display(); 
  cout<<endl;
  c4.display();
  cout<<endl;

  cout<< "Total number of customers: " << Costumer::getCount()<< endl; // Accessing static member count using class name
  // Static members are accessed using the class name, not the object name.
  return 0;
}