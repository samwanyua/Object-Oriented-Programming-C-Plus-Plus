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

int main(){
    
    Person person1;
    person1.first = "Caleb";
    person1.last = "Cate";

    person1.printFullName();
    return 0;
}