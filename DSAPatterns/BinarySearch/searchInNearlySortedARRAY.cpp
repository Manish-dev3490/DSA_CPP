#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int findTarget(vector<int>& arr, int target) {
        // code here
        int start=0,end=arr.size(),mid;
        
        while(start<=end){
            mid=start+(end-start)/2;
            
            if(arr[mid]==target)return mid;
            if(mid-1 >=start && arr[mid-1]==target)return mid-1;
            if(mid+1 <=end && arr[mid+1]==target)return mid+1;
            
            else if(arr[mid] < target)start=mid+2;
            else end=mid-2;
        }
        
        return -1;
    }
};

int main()
{

    return 0;
}