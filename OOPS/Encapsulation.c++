#include <iostream>
using namespace std;

// Encapsulation is a technique in oops which is used to wrapping up of all data members and functions into the single entity . And it gives data hiding which increase the security from user because sometimes user enter invalid data ike age in negative which is invalid thatswhy we dont give direct access to data members we give access through functions this helps in if user has entered invalid we can throw error .



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