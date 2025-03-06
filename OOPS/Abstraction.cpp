#include <iostream>
using namespace std;

// Abstraction is a part of object oriented programming part that wen we make functions in to the class and when user use it.it only displaying the essentil information not the actual implementaion of that function which is working in the backend it is known as abstraction.......



class customer
{
    string name;
    int age;
    int balance;

public:
    customer(string a, int b, int c)
    {
        name = a;
        age = b;
        balance = c;
    }

    void setAge(int a)
    {
        if (a > 0 && a < 100)
        {
            age = a;
            cout << "Your age has been updated your correct age is as per your " << age;
        }
        else
            cout << "Please enter a valid age";
    }

    void depositMoney(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Your current balance is " << balance;
        }
        else
            cout << "You have entered invalid amount please eneter valid amount";
    }

    void withdrawMoney(int amount)
    {
        if (amount > 0 && amount<=balance)
        {
            balance -= amount;
            cout << "Now you have " << balance << " remain in your bank account";
        }
        else
            cout << "You are entering invalid amount please enter valid amount for withdraw money";
    }
};

int main()
{
    customer user1("Manish", 21, 10000);
    user1.depositMoney(1000);
    cout<<endl;
    user1.withdrawMoney(500);
}