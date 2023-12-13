#include <iostream>
#include <vector>

using namespace std;

int lastOccurrence(vector<int> arr,int target){
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;

    int ans=-1;

    while(start<=end){
        if(target==arr[mid]){
            ans=mid;
            start=mid+1;
        }else if(target<arr[mid]){
            end=mid-1;
        }else if(target>arr[mid]){
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
    
}
int main(){
    vector<int> arr{1,2,4,4,4,5,6,7,8,8,8,8,9,10,11};
    int target=8;

    int ans =lastOccurrence(arr, target);

    cout<<"ans:"<<ans<<endl;
    return 0;
}
