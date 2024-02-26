#include <iostream>

using namespace std;

/* 
In C++, encapsulation is like putting your data and the functions that 
work with the data inside a protective box (class). You control who gets 
access to the data and how they interact with it. This helps in creating 
more organized and secure code, and it's one of the fundamental principles 
of Object-Oriented Programming (OOP).

Encapsulation is the bundling of data and methods that operate on the data 
within a single unit, i.e., a class. It helps hide the internal details of 
the class and exposes only what is necessary.
*/

//getters and setters


class Employee{
private: 
    string name;
    string company;
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


};

int main(){

    Employee employee3("Sam", "Spotify", 24);
    employee3.introduceYourself(); //gives all the details

    Employee employee4("Wanyua", "Google", 24);
    employee4.introduceYourself();

    employee3.setAge(34);
    cout << employee3.getName() << " is " << employee3.getAge() << " years old" << endl;

    




    return 0;
}