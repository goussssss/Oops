#include <iostream>
using namespace std;

class Person {

//encapsulation is a concept of wrapping data and methods into a single unit or class. 
//It restricts direct access to some components and can prevent the accidental modification of data.
//setting attributes to private so that they cannot be accessed directly from outside the class.
// The private members of the class can only be accessed by the public methods of the class.

//settting attributes value by setter method this ensures that the data is valid and consistent.

// The getter method allows read-only access to the private data members.

// The setter method can include validation logic to ensure that the data being set is valid.
private:
    string name;
    int age;

public:
    // Setter for name
    void setName(string n) {
        name = n;
    }

    // Setter for age with basic validation
    void setAge(int a) {
        if (a > 0) {
            age = a;
        } else {
            cout << "Invalid age!" << endl;
        }
    }

    // Getter for name
    string getName() {
        return name;
    }

    // Getter for age
    int getAge() {
        return age;
    }
};

int main() {
    Person p;
    p.setName("John");
    p.setAge(25);

    cout << "Name: " << p.getName() << endl;
    cout << "Age: " << p.getAge() << endl;

    return 0;
}
