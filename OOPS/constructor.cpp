#include <iostream>
using namespace std;

class customer
{
public:
    string name;
    int accno;
    int balance;

    // There is a hidden consturctor function in the class added by the compiler it calls during the object creatition time , it does not return any value, name of consturctor should be same as class name,it is used to initialize vale;
    customer(string name,int accno,int balance)
    {
        this->name=name;
        this->accno=accno;
        this->balance=balance;
        cout << "Object is created"<<endl;
        cout<<this->accno<<endl;
        cout<<this->name<<endl;
        cout<<this->accno;

    }
};

int main()
{
    // Now we are creating an object and when objecct create the cunstructor function is called ---> look into the class ---> now this object is created behind the scene with random values of name , accno,balance which is not meaningful so constructor is use for that to initialize by default values for object
    customer user1("Digvijay Rathee",17000876,100);
    return 0;
}