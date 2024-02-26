#include <iostream>
#include <string>

class Person{
    //private
    std::string first;
    std::string last;

    public:
   void setFirstName(std::string first){ // or... void setFirstName(std::string firstName){first = firstName}; having different variable name
        this ->first = first;
   }


    void setLastName(std::string last){ 
        this ->last = last;
   }

    //Getter
    std::string getName(){
        return first + " " + last;
    }

    void printFullName(){
        std::cout << first << " " <<last << std::endl;
    }

    //constructor
    Person(std::string first, std::string last): first(first), last(last){
    // Person() = default;

    }
        /* same as
        Person(std::string first, std::string last){
            this ->first = first;
            this ->last = last;
        }
        */
    
};

//inheritance
class Employee: public Person{
    public:
    Employee(std::string first, std::string last) : Person(first,last){};

};


int main(){

    Person p("Priscilla", "Kamau" );
    std::cout << p.getName() <<std::endl; //using getters


    Person p1("Ken","Karanja");
    std::cout << p1.getName() <<std::endl; 

    // Person p3;

    Employee e1("Eden", "Hazard");
    e1.printFullName();

    return 0;
}
/*
class -describes the structure
object - a specific example of that structure (instance)
instance is another name for object
creating objects from a class - is instantiating

methods - functions defined inside a class
*/


/*
Pillars of OOP:
- Abstraction -> making something easy by hiding the complicated stuff
- Encapsulation -> granting access to private data only through controlled public interfaces
- Polymorphism -> treating multiple different objects as their base object type
- Inheritance -> deriving classes that inherit properties from their parent classes

*/