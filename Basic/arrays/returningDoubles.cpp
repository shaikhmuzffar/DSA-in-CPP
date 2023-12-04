#include <iostream>

using namespace std;

int main(){

    int arr[100];
    int n=10;

    for (int i = 0; i < n; i++){
        cout<<"enter value "<<i<<" :"<<endl;
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++){
        arr[i]=arr[i]*2;
    }
    cout<<"doubles of inputs"<<endl;
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    


    return 0;
}