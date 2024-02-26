#include <iostream>

using namespace std;

    /*
    
    OOP - Object Oriented Programming --> programming paradigm
    OOP solves real life problems

    Object-Oriented Programming (OOP) is a programming paradigm that uses 
    the concept of "objects" to organize and structure code.

    Class: A class is a user-defined data type in C++. It represents a blueprint 
    for creating objects. It defines properties (attributes) and behaviors (methods) 
    that the objects will have.
    Object: An object is an instance of a class. It is a concrete entity created based 
    on the class definition. Objects encapsulate data and behavior.

    2. Access Modifiers:
    Public: Members are accessible from outside the class.
    Private: Members are only accessible within the class. Default access for class members is private if not specified.


    class Example {
        public:
            int publicVar;   // Public member
        private:
            int privateVar;  // Private member
    };

    A constructor is a special member function that is called when an object is created. It initializes the object's attributes.
    Constructors have the same name as the class and do not have a return type.
            
    class Book {
        public:
            // Parameterized Constructor
            Book(string title, string author) {
                this->title = title;
                this->author = author;
            }

            // Other methods and attributes...
        private:
            string title;
            string author;
    };

// Creating an object with a constructor
Book myBook("The C++ Programming Language", "Bjarne Stroustrup");


4. Encapsulation:
Encapsulation involves bundling data (attributes) and methods that operate on the data within a single unit (class). 
It helps hide the internal details and expose only what is necessary.

class BankAccount {
private:
    double balance;

public:
    void deposit(double amount) {
        // Validate and update balance...
    }

    double getBalance() {
        return balance;
    }
};

5. Abstraction:
Abstraction involves simplifying complex systems by modeling classes based on
essential properties and behaviors. It allows developers to focus on relevant 
details and ignore unnecessary complexities.

// Abstraction through a Shape class
class Shape {
public:
    virtual double area() = 0;  // Pure virtual function
};

class Circle : public Shape {
private:
    double radius;

public:
    double area() override {
        return 3.14 * radius * radius;
    }
};


6. Inheritance:
Inheritance allows a class (subclass/derived class) to inherit properties and 
behaviors from another class (base class/parent class). It promotes code reuse and hierarchy.

class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking." << endl;
    }
};

// Creating an object of the derived class
Dog myDog;
myDog.eat();
myDog.bark();

7. Polymorphism:
Polymorphism allows objects of different classes to be treated as objects of a common base class. It enables the use of a single interface to represent various types, 
promoting flexibility and extensibility.

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a shape." << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle." << endl;
    }
};

// Using polymorphism
Shape* shapePtr = new Circle();
shapePtr->draw();  // Calls the draw() method of the Circle class

In C++, OOP provides a powerful and flexible way to design and organize code. It promotes code reuse, modularity, and easier maintenance by modeling real-world entities
as objects with associated behaviors and attributes.

    */

int main(){


    
    return 0;
}