#include<iostream>
using namespace std;

void print(int n){
    if(n==2){
        cout<<n<<endl;
        return;
    }
    print(n-2);

    cout <<n<<endl;

}

int main(){
    print(10);
}