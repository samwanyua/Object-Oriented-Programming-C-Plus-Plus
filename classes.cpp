#include <iostream>

using namespace std;

/* Access modifiers:
    - Public - accessible outside class
    - Private (default) - not accessible outside class
    - Protected - has rules to it 

*/
class Emyployee{
    public:
        string name;
        string company;
        int age;

    //class method/function
    void introduceYourself(){
        cout << "Name : " << name << endl;
        cout << "Company : " << company << endl;
        cout << "Age : " << age << endl;
    }

    //constructor - doesn't have a return type, has the same name as the class it belong to, it must be public
    Emyployee(string employeeName, string employeeCompany, int employeeAge){
        name = employeeName;
        company = employeeCompany;
        age = employeeAge;
    }


};

int main(){

    //an object
    // Emyployee employee1;
    // employee1.name = "Sam Wanyua";
    // employee1.company = "Spotify";
    // employee1.age = 24;

    // cout << employee1.name << endl;


    // employee1.introduceYourself(); // gives full details name, company, age
    // employee1.introduceYourself(); // repetition 

    Emyployee employee3("Sam", "Spotify", 24);
    cout << employee3.company << endl;
    employee3.introduceYourself(); //gives all the details

    Emyployee employee4("Wanyua", "Google", 24);
    employee4.introduceYourself();




    return 0;
}