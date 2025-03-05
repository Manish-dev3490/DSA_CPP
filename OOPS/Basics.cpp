#include <iostream>
using namespace std;

class student
{

    string name;
    int age;
    int roll_no;
    string grade;

public:
    string getname(string n)
    {
        name = n;
        return name;
    }

    int getage(int n)
    {
        age = n;
        return age;
    }

    int getroll(int n)
    {
        roll_no = n;
        return roll_no;
    }

    string getgrade(string n)
    {
        if (n == "123")
        {
            grade="A+";
            return grade;
        }

        return "";
    }
};

int main()
{
    // now we have initialized a class we can use it as many times we want just look below the code file:

    student s1;
    // s1.name = "manish";
    // s1.age = 21;
    // s1.roll_no = 2;
    // s1.grade = "B+";
    // cout << s1.name << endl;
    // cout << s1.age << endl;
    // cout << s1.roll_no << endl;
    // cout << s1.grade << endl;

    // we can also access the infor without using public by initializing methods
    cout << s1.getname("Khushi_manish") << endl;
    cout << s1.getage(22) << endl;
    cout << s1.getgrade("123") << endl;
    cout << s1.getroll(4) << endl;
}