#include<iostream>
#include<cmath>
using namespace std;


bool checkArmstrong(int number, int digit)
{
    int ans = 0, rem, value = number;

    while (value)
    {
        rem = value % 10;
        value = value / 10;
         ans = ans + round(pow(rem, digit));
    }
    if (number == ans)
        return true;
    else
        return false;
}

int countDigits(int number)
{
    int count = 0;
    while (number)
    {
        count++;
        number = number / 10;
    }
    return count;
}


int main(){
    int number;
    cout<<"Input the number you want want to check";
    cin>>number;
    int digit=countDigits(number);
    cout<<checkArmstrong(number,digit);
    cout<<endl<<digit;

}