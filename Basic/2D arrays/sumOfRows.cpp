#include <iostream>
using namespace std;

int main(){
    int arr[5][4]={
        {1,2,3,4},
        {2,3,4,1},
        {5,6,1,3},
        {2,4,6,8},
        {1,9,9,6}
        };
    int rows =5;
    int cols =4;
    int sum[5];

    for(int row=0; row<rows; row++){
        int sumR=0;
        for(int col=0; col<cols;col++){
            // cout<<"currEle: "<<arr[row][col]<<endl;
            sumR=sumR+arr[row][col];
        }
        sum[row]=sumR;
        cout<<endl;
    }

    cout<<endl;
    cout<<"printing array of sum"<<endl;
    for(int i=0; i<5; i++){
        cout<<sum[i]<<" ";
    }
    
    return 0;
}