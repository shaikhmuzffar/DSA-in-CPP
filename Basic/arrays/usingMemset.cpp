#include <iostream>

using namespace std;

int main(){
    int arr[10];
    memset(arr, 0,sizeof(arr));

    for(int i=0; i<sizeof(arr); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}