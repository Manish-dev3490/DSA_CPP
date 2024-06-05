#include <iostream>
using namespace std;

int main()
{

    // Calculate the power of a number
    // int number, power, answer;
    // cout<<"Enter the number";
    // cin >> number;

    // cout << "Enter the power";
    // cin >> power;
    // answer = number;

    // for (int i = 1; i < power; i++)
    // {
    //     answer = number * answer;
    // }

    // cout << "Answer is " << answer;
    // return 0;

    // Check wheather number is prime or not
    // int number;
    // cout << "Enter the number you want to check";
    // cin >> number;

    // if (number < 2)
    // {
    //     cout << "number is less than two it is not prime ";
    //     return 0;
    // }

    // else
    // {
    //     for (int i = 2; i < number - 1; i++)
    //     {
    //         if (number % i == 0)
    //             cout << "This is not Prime";
    //     }

    //     cout << "Prime Nummber";
    // }




    // find the nth number of fibonacci series
    //   int number;
    //     cout << "Enter the Nth number you want to find: ";
    //     cin >> number;

    //     int last = 0;
    //     int current = 1;
    //     int next;

    //     if (number == 0)
    //         cout << "Nth number is " << last;
    //     else if (number == 1)
    //         cout << "Nth number is " << current;
    //     else {
    //         for (int i = 2; i <= number; ++i) {
    //             next = last + current;
    //             last = current;
    //             current = next;
    //         }
    //         cout << "Nth number is " << current;
    //     }

    //     return 0;



    //   a a a a a
    //   b b b b b
    //   c c c c c
    //   c c c c c
    //   c c c c c

    // char end='e';

    // for (char val='a';val<='e';val=val+1){
    //     for (int i = 0; i <=5; i++)
    //     {
    //         cout<<val<<" ";
    //     }
    //     cout<<endl;

    // }
    //     return 0;



    // Printing Number pattern from 1 to 25
    // int count =1;
    // for(int row=1;row<=5;row++){
    //     for (int col=1;col<=5;col++){
    //         cout<<count<<" ";
    //         count=count+1;
    //     }
    //     cout<<endl;
    // }



    // Printing medium level patterns now 
    // for(int r=1;r<=5;r++){
    //     for (int c=1;c<=r;c++){
    //         cout<<c<<" ";
    //     }
    //     cout<<endl;
    // }


    // for(int row=1;row<=5;row++){
    //     for(int col=1;col<=row;col++){
    //         cout<<row<<" ";
    //     }
    //     cout<<endl;
    // }


    // for(int row=1;row<=5;row++){
    //     for(int col=row ; col>=1; col--){
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;
    // }


    // char end ='e';
    // for(char val='a';val<=end;val++){
    //     for(char val2='a';val2<=val;val2++){
    //         cout<<val<<" ";
    //     }

    //     cout<<endl;
    // }


    for (int row=5; row>=1;row--){
        for(int col=row;col>=1;col--){
            cout<<"*"<<" ";
        }

        cout<<endl;
    }
}
