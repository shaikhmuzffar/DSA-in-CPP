#include <iostream>
using namespace std;

int main(){
    int arr[4][4]={
        {1,2,3,4},
        {2,3,4,1},
        {5,6,1,3},
        };
    int rows=4;
    int cols=4;
    int key=0;

    for(int row=0; row<rows; row++){
        for(int col=0; col<cols;col++){
            if(arr[row][col]==key){
                cout<<key<<" present at ind"<<row<<", "<<col;
            }
        }
    }
    return 0;
}