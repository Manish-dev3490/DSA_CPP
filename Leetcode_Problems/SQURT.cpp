#include <iostream>
using namespace std;

int main()
{
    int target,ans;
    cout << "Enter the integeter yu want to find square root of";
    cin >> target;
    

    // Brute force approach for finding square root 
    // for(int i=1;i<=target; i++){
    //     if(i*i == target){
    //         ans=i;
    //         break;
            
    //     }

    //     else if(i*i > target){
    //         ans=i-1;
    //         break;
    //     }
    // }

    // cout<<"answer is "<<ans;



    // Optimized approach with binary search 
    int start=0,end=target-1,mid;
    while(start<=end){
        mid=start+(end-start)/2;
        if(mid*mid == target){
            ans=mid;
            break;
        }

        else if(mid*mid>target) end=mid-1;
        else {
            ans=mid;
            start=mid+1;
        }
    }

    cout<<"answer is" <<ans;
}