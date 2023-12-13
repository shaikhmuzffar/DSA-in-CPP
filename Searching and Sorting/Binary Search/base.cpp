#include <iostream>

using namespace std;


int binarySearch(int arr[],int size,int target){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;

    while(start <= end){
        if(target==arr[mid]){
            return mid;
        }
        if(target<arr[mid]){
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
    return -1;
    

}

int main()
{
    int arr[]={2,4,6,8,10,12,16};
    int size=7;
    int target=10;

    int indexOfTarget=binarySearch(arr,size,target);

    if(indexOfTarget==-1){
        cout<<"element not found ";

    }else{
        cout<<"element found at index "<<indexOfTarget<<endl;

    }
    return 0;
}