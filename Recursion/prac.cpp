#include <iostream>
using namespace std;

void print(int n)
{
    if (n == 2)
    {
        cout << n << endl;
        return;
    }
    print(n - 2);

    cout << n << endl;
}

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + sum(n - 1);
}

int power(int n)
{
    if (n == 1)
        return 2;
    return 2 * power(n - 1);
}

int fibo(int first,int second,int n){
    if(n<=1)return n;
    return fibo(first,second,n-1)+fibo(first,second,n-2);
}

int sumOfArr(int arr[],int start){
    if(start==0){
        return arr[0];
    }
    return arr[start] + sumOfArr(arr,start-1);
}
int main()
{
    // print(10);
    // cout << endl;
    // cout << factorial(5);
    // cout<<sum(5);
    // cout << power(5);
    // cout<<fibo(0,1,5);
    // int arr[5]={1,2};
    // cout<<sumOfArr(arr,4);
}