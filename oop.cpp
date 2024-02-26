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
};

/*
class -describes the structure
object - a specific example of that structure (instance)
instance is another name for object
creating objects from a class - is instantiating

methods - functions defined inside a class
*/

int main(){

    // Person person1;
    // person1.first = "Caleb";
    // person1.last = "Cate";

    // person1.printFullName();

    // Person p2;
    // p2.first = "Sam";
    // p2.last = "Wanyua";

    // p2.printFullName();

    Person p;
    p.setFirstName("Priscilla");
    p.setLastName("Kamau");
    p.printFullName();
    std::cout << p.getName() <<std::endl; //using getters


    Person p1;
    p1.setFirstName("Ken");
    p1.setLastName("Karanja");
    p1.printFullName();

    return 0;
}

/*
Pillars of OOP:
- Abstraction -> making something easy by hiding the complicated stuff
- Encapsulation -> granting access to private data only through controlled public interfaces
- Polymorphism -> treating multiple different objects as their base object type
- Inheritance -> deriving classes that inherit properties from their parent classes

*/