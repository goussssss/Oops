#include<iostream>
using namespace std;

class Costumer
{
  string name;
  int balance,acc_no;
  public:
    Costumer(string name,int balance,int acc_no)
    {
      this->name=name;
      this->balance=balance;
      this->acc_no=acc_no;
    }

    void deposit(int amount){
      if(amount<0)
      {
        throw "Invalid amount";
      }
      else
      {
        balance+=amount;
        cout<<"Deposit successful"<<endl;
      }
    }

    void withdraw(int amount){
      if(amount<0)
      {
        throw "Invalid amount";
      }
      else if(amount>balance)
      {
        throw "Insufficient balance";
      }
      else
      {
        balance-=amount;
        cout<<"Withdraw successful"<<endl;
      }
    }
    

    void show()
    {
      cout<<"Name: "<<name<<endl;
      cout<<"Balance: "<<balance<<endl;
      cout<<"Account Number: "<<acc_no<<endl;
      cout<<"------------------------"<<endl;
    }

};

int main(){
  Costumer c1("John",1000,12345);
  c1.show();
  cout<<endl;
  try{
    c1.deposit(500);
    c1.withdraw(2000);
  }
  catch(const char* msg)//pointer points to the throwed string
  {
    cout<<msg<<endl;
  }
  
  c1.show();


  return 0;
}