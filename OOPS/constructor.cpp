#include <iostream>
using namespace std;

class customer
{
    string name;
    int accno;
    int balance;
    static int totalcustomers;

public:
    // Default constructor
    customer()
    {
        name = "manish";
        accno = 123456789;
        balance = 100;
        totalcustomers++;
    }

    // Parameterized constructor
    customer(string name, int accno)
    {
        this->name = name;
        this->accno = accno;
        this->balance = 12345;
        totalcustomers++;
    }

    customer(string a, int b, int c) : name(a), accno(b), balance(c)
    {
        totalcustomers++;
    }

    // Copy Constructor - Should increment totalcustomers
    customer(customer &obj)
    {
        this->name = obj.name;
        this->accno = obj.accno;
        this->balance = obj.balance;
        totalcustomers++;  // ✅ Fix: Increment totalcustomers for copies too
    }

    void display()
    {
        cout << name << " " << accno << " " << balance << " Total Customers: " << totalcustomers << endl;
    }
};

// Define static member
int customer::totalcustomers = 0;

int main()
{
    customer user1("Digvijay Rathee", 17000876, 100);
    customer user2;
    customer user3("Khushi Satija", 12345678);

    user1.display();
    cout<<endl;
    user2.display();
    cout<<endl;
    user3.display();
    cout<<endl;

    customer user4(user3); // Copy constructor is called
    user4.display();  // ✅ Now totalcustomers is correctly counted

    return 0;
}
