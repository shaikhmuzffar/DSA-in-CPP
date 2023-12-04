#include <iostream>

using namespace std;

int find(int arr[],int size,int num){
    for(int i=0;i<size;i++){
        if(arr[i]==num)
        return 1;
    }
    return 0;
}

int main(){

int size = 5;
    int arr[5] = {12,15,6,8,3};
    int num;

    cout<<"search:"<<endl;
    cin>>num;

    if(find(arr,size,num)){
        cout<<num<<" found ";
    }else{
        cout<<num<<" not exist ";

    }
    return 0;
}