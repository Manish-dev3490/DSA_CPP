#include <iostream>
using namespace std;

class customer
{
public:
    string name;
    int accno;
    int balance;

    // There is a hidden consturctor function in the class added by the compiler it calls during the object creatition time , it does not return any value, name of consturctor should be same as class name,it is used to initialize vale;

    // By default construtor
    customer()
    {
        name = "manish";
        accno = 123456789;
        balance = 100;
    }

    // Parameterized constructor
    customer(string name, int accno, int balance)
    {
        this->name = name;
        this->accno = accno;
        this->balance = balance;
    }

    void display()
    {
        cout << name << " " << accno << " " << balance;
    }
};

int main()
{
    // Now we are creating an object and when objecct create the cunstructor function is called ---> look into the class ---> now this object is created behind the scene with random values of name , accno,balance which is not meaningful so constructor is use for that to initialize by default values for object....

    customer user1("Digvijay Rathee", 17000876, 100);
    customer user2;
    user1.display();
    cout<<endl;
    user2.display();

    return 0;
}