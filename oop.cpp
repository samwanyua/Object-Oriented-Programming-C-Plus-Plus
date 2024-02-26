#include <iostream>
#include <string>

class Person{
    public:
    std::string first;
    std::string last;

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

    Person person1;
    person1.first = "Caleb";
    person1.last = "Cate";

    person1.printFullName();

    Person p2;
    p2.first = "Sam";
    p2.last = "Wanyua";

    p2.printFullName();
    return 0;
}