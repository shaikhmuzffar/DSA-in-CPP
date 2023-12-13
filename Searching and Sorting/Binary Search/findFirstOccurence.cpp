#include <iostream>
#include <vector>

using namespace std;

int firstOccurrence(vector<int> arr,int target){
    int start = 0;
    int end = arr.size()-1;
    int mid=start+(end-start)/2;

    
    int ans=-1;

    cout<<"start"<<start<<endl<<"end"<<end<<endl<<"mid"<<mid<<endl;

    while(start<=end){
        if(arr[mid]==target){
            ans=mid;
            end=mid-1;
            // cout<<ans<<ans<<endl;
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
    int target=4;
    int ans=firstOccurrence(arr, target);

    // if(ans==-1){
    // cout<<"element not found"<<endl;

    // }else{
    cout<<"ans is"<<ans<<endl;

    // }
    return 0;
}
