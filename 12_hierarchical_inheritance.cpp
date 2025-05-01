#include<iostream>
using namespace std;

class Human
{
  protected:
    string name;
    int age; 
    static int HumanCount;

  public:
  Human(){
    cout<<"Human constructor called"<<endl;
  }
  static int getHumanCount(){
    return HumanCount;
  }
  
};

class Female: public Human // Public inheritance means that the public members of the base class remain public in the derived class, and the protected members of the base class remain protected in the derived class.
{
  private:
    string country;
    string employed; 
    static int FemaleCount; 

  public:
  Female(){
    cout<<"Female constructor called"<<endl;
  }
  Female(string name, int age, string country, string employed){
    HumanCount++;
    FemaleCount++;
    this->name=name;
    this->age=age;
    this->country=country;
    this->employed=employed;
  }
  void display(){
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Country: "<<country<<endl;
    cout<<"Employed: "<<employed<<endl;
    cout<<"------------------------"<<endl;
  }
  static int getFemaleCount(){
    return FemaleCount;
  }

};

class Male: public Human // Public inheritance means that the public members of the base class remain public in the derived class, and the protected members of the base class remain protected in the derived class.
{
  private:
    string country;
    string employed; 
    static int MaleCount;

  public:
  Male(){
    cout<<"Male constructor called"<<endl;
  }
  Male(string name, int age, string country, string employed){
    HumanCount++;
    MaleCount++;
    this->name=name;
    this->age=age;
    this->country=country;
    this->employed=employed;
  }
  void display(){
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Country: "<<country<<endl;
    cout<<"Employed: "<<employed<<endl;
    cout<<"------------------------"<<endl;
  }
  static int getMaleCount(){
    return MaleCount;
  }
  
  

};

int Human::HumanCount=0;
int Male::MaleCount=0;
int Female::FemaleCount=0;
// Static member count is initialized outside the class definition.





int main(){
  Male m1("John Doe", 30, "USA", "Yes");    //here  below 5 time default human constructor is called.
  Male m2("Jane Smith", 25, "Canada", "NO");
  Male m3("Alice Johnson", 28, "UK", "YES");
  Female f1("Alice Johnson", 28, "UK", "YES");
  Female f2("John Doe", 30, "USA", "YES");

  Male defaultMale;  //first human default constructor is called then male default constructor is called.
  Female defaultFemale; //first human default constructor is called then female default constructor is called.
  Human defaultHuman; //only human default constructor is called.
  

  m1.display();
  cout<<endl;
  m2.display();
  cout<<endl;
  m3.display();
  cout<<endl;
  f1.display();
  cout<<endl;
  f2.display();
  cout<<endl;
  cout<<"Total number of Humans: "<<Human::getHumanCount()<<endl;
  cout<<"Total number of Males: "<<Male::getMaleCount()<<endl;
  cout<<"Total number of Females: "<<Female::getFemaleCount()<<endl;
  cout<<endl;
  return 0;
  
}