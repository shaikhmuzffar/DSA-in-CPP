#include <iostream>
using namespace std;

int main(){
    int arr[4][4]={
        {1,2,3,4},
        {2,3,4,1},
        {5,6,1,3},
        {2,4,6,8},
        };
    int rows=4;
    int cols=4;
    int sum[5];

    for(int row=0; row<rows; row++){
        int sumR=0;
        for(int col=0; col<cols;col++){
            // cout<<"currEle: "<<arr[row][col]<<endl;
            sumR=sumR+arr[col][row];
        }
        sum[row]=sumR;
        cout<<endl;
    }

    cout<<endl;
    cout<<"printing array of col sum"<<endl;
    for(int i=0; i<5; i++){
        cout<<sum[i]<<" ";
    }
    
    return 0;
}