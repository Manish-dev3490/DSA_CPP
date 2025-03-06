#include <iostream>
using namespace std;

// Inheritance ---> Inheritance is passing properties and charecterstics from parent or base class to child or derived class . let me give you an example . Every human have there name , they have a residential address where they live , they have weight ,height and age now i am goint to ake a class about human whic will consists these properties of humans
class human
{
public:
    string name;
    int age;
    string address;
};

// Now i am going to make class of student now i am going to use inheritance so understand with that every student have there name , age ,address so there is no need to write that i have these propeties in class human i will inherit these properties form class Human;

class student: protected human
{
    public:
    int rollNo;
    int admissioNo;

    student(string name, int age, string address, int roll, int admNo){
    
        this->name = name;
        this->age = age;
        this->address = address;
        this->rollNo = roll;
        this->admissioNo = admNo;
    }

    void displayAll(){
        cout<<"Name is "<<name<<" "<<"age is "<<age<<" "<<"address is "<<address<<" "<<"roll no is "<<rollNo<<" "<<"addmission number is "<<admissioNo;
    }
};


int main(){
student user1("manish",22,"najafgarh delhi ncr",21,12345);
user1.displayAll();
}