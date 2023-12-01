// hollow Inverted Half Pyramid
/*
expected output
12345
2  5
3 5
45
5

*/ 

#include <iostream>

using namespace std;

int main(){

    int n=10;

    for (int row=0; row<n; row++){
        for(int col=row+1; col<=n;col++ ){
            if(row==0 || col==row+1 || col==n){
                cout<<col;
            }else{
            cout<<" ";
            }
        }
        cout<<endl;
    }
    

    return 0;
    
}