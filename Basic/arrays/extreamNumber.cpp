#include <iostream>
using namespace std;

int main(){
    int size =8;
    int arr[8]={1,2,3,4,5,6,7,8};
    int start =0;
    int end =size-1;

    // myapproch -
    // for(int i=0; i<size; i++){
    //     while(start<end){
    //         cout<<arr[start];
    //         cout<<arr[end];
    //         start++;
    //         end--;
    //     }
        
    // }

    // tutor approch
    while(start<=end){
        if(start==end){
            cout<<arr[start]<<" ";
        }else{

            cout<<arr[start]<<" ";
            cout<<arr[end]<<" ";
        }
        start++;
        end--;
    }
    return 0;
}