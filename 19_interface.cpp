interface Vehicle {
    void start();
    void stop();
}

class Car implements Vehicle {
    public void start() { System.out.println("Car started"); }
    // Missing stop() implementation!
}


// The Java compiler throws an error when compiling, even if you don’t create an object.

// ---------------------------------------------------------
abstract class Vehicle {
    abstract void start();
    abstract void stop();
}

abstract class Bike extends Vehicle {
    public void start() { System.out.println("Bike started"); }
    // stop() not implemented, but OK because Bike is abstract!
}

// --------------------------------------------------------------

class Vehicle {
public:
    virtual void start() = 0;
    virtual void stop() = 0;
};

class Car : public Vehicle {
public:
    void start() { cout << "Car started\n"; }
    // Missing stop()
};

'''the compiler does not throw error untill unless yoou try to create the object of the Car class
you cannot create the object of the CAR class becaue it is abstract class 
it is abstract class because it does not implemet all the abstract methods of the parent class
there fore it is not the concrete class''' 




// --------------------------------------------------------------
#include <iostream>
using namespace std;

// Abstract class with pure virtual functions
class Vehicle {
public:
    virtual void start() = 0;
    virtual void stop() = 0;
};

// Derived class missing one method
class Car : public Vehicle {
public:
    void start() {
        cout << "Car started" << endl;
    }
    // stop() not implemented → error!
};

int main() {
    Car c;  // ❌ Compiler error: Car is abstract because stop() is missing
    c.start();
    return 0;
}

#include <iostream>
using namespace std;

// Abstract class
class Vehicle {
public:
    virtual void start() = 0;
    virtual void stop() = 0;
};

// Derived class is still abstract because stop() is missing
class Bike : public Vehicle {
public:
    void start() {
        cout << "Bike started" << endl;
    }
    // stop() not implemented → ✅ OK because Bike is abstract
};

int main() {
    // Bike b;  // ❌ ERROR if uncommented because abstract class can't be instantiated
    cout << "Program compiled fine since no object created." << endl;
    return 0;
}



// ---------------------------------------------

interface Vehicle {
    void start();
    void stop();
}

class Car implements Vehicle {
    public void start() { System.out.println("Car started"); }
    // Missing stop() implementation!
}

abstract class Car implements Vehicle {
    public void start() { System.out.println("Car started"); }
    // stop() is missing but OK because Car is abstract
}

abstract class Car implements Vehicle {
    public void start() { System.out.println("Car started"); }
    // stop() is missing → OK because Car is abstract
}

class Mercedes extends Car {
    public void stop() { System.out.println("Mercedes stopped"); }
    // Now it's a concrete class → OK to create objects
}

public class Main {
    public static void main(String[] args) {
        Mercedes m = new Mercedes();
        m.start();
        m.stop();
    }
}



