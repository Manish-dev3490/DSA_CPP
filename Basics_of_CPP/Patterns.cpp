#include<iostream>
using namespace std;

int main(){
    // int row=5,col=5;
    // for(int i=1;i<=row;i++){
    //     for(int j=1;j<=col;j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }


    // for(char row='a';row<='e';row++){
    //     for(int col=1;col<=5;col++)cout<<row<<" ";
    //     cout<<endl;



    // for(char row='a';row<='f';row++){
    //     for(char col='a';col<=row;col++){
    //         cout<<row<<" ";
    //     }
    //     cout<<endl;
    // }



    // for(int row=5;row>=1;row--){
    //     for(int col=row;col>=1;col--){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }


     for (int row = 1; row <= 5; row++) {
        // Print spaces
        for (int col = 1; col <= 5 - row; col++) {
            cout << "  ";
        }
        // Print stars
        for (int j = 1; j <= row; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    }
