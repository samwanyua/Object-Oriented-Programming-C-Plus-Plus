#include <iostream>
// #include <string>
using namespace std;


/* 
Abstraction is a fundamental concept in computer science and software engineering 
that involves simplifying complex systems by modeling classes based on essential 
properties and behaviors while ignoring or hiding unnecessary details. 
It is one of the key principles of Object-Oriented Programming (OOP).

Only the essential features and behaviors of an object or system are represented, 
while non-essential details are omitted. This helps in understanding and managing 
complex systems by focusing on what's important.

Hiding complexity from the user for example the logic behind taking a photo

*/

class AbstractEmployee{
    public:
    // Pure virtual function/ an abstract function
    virtual void AskForPromotion() = 0;
};

class Employee:  AbstractEmployee {
private: 
    std::string name;  
    std::string company;
    int age;
public:
//setter
    void setName(string employeeName){
        name = employeeName;
    }
    //getter
    string getName(){
        return name;
    }
    void setCompany(string employeeCompany){
        company = employeeCompany;
    }
    string getCompany(){
        return company;
    }

    void setAge(int employeeAge){
        if(employeeAge >= 18)
        age = employeeAge;
    }
    int getAge(){
        return age;
    }

    void introduceYourself(){
        cout << "Name : " << name << endl;
        cout << "Company : " << company << endl;
        cout << "Age : " << age << endl;
    }

    //constructor - doesn't have a return type, has the same name as the class it belong to, it must be public
    Employee(string employeeName, string employeeCompany, int employeeAge){
        name = employeeName;
        company = employeeCompany;
        age = employeeAge;
    }

    void AskForPromotion(){
        if(age > 30){
            cout << name << " got promoted!" << endl;
        }
        else{
            cout << name << " , sorry, no promotion for you!" << endl;

        }
    }


};

int main(){

    Employee employee3("Sam", "Spotify", 24);
    // employee3.introduceYourself(); //gives all the details

    Employee employee4("Wanyua", "Google", 44);
    // employee4.introduceYourself();

    // employee3.setAge(34);
    // cout << employee3.getName() << " is " << employee3.getAge() << " years old" << endl;

    
    employee3.AskForPromotion();
    employee4.AskForPromotion();



    return 0;
}