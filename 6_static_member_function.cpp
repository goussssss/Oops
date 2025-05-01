#include<iostream>
using namespace std;

class Costumer
{
  private:
    string name;
    int accountNumber;
    int balance;
    static int count;
    static int totalBalance; 
    
  public:
    Costumer(){
      count++; 
      accountNumber = 0;
      balance = 0;
    }


    Costumer(string n, int a, int b){
      name = n;
      accountNumber = a;
      balance = b;
      count++; 
      totalBalance += b;
    }

    void deposit(int amount){
      balance += amount;
      totalBalance += amount; 
    }
    void withdraw(int amount){
      if (amount <= balance) {
        balance -= amount;
        totalBalance -= amount; 
      } else {
        cout << "Insufficient balance!" << endl;
      }
    }

    


    void display(){
      cout << "Name: " << name << endl;
      cout << "Account Number: " << accountNumber << endl;
      cout << "Balance: " << balance << endl;
      cout << "------------------------" << endl;
    }
    static void getCount() {
      cout << "Total number of customers: " << count << endl; 
      cout << "Total balance of all customers: " << totalBalance << endl;

    }
    
    // Static member function to access the static member count


};

int Costumer::count = 0; 
int Costumer::totalBalance = 0; 

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

  c2.deposit(500);
  c3.withdraw(300);
  c4.withdraw(2000); 

  cout<<endl;
  c2.display();
  cout<<endl;
  c3.display();
  cout<<endl;
  c4.display();
  cout<<endl;
  Costumer::getCount(); 
  
  return 0;
}