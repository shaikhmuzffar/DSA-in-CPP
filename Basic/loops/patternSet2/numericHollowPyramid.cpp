#include <iostream>
using namespace std;
int main(){
    int n=5;

    for(int row=0;row<n;row++){
        // spaces 
        for(int spc=0;spc<n-row-1;spc++){
            cout<<"";
        }
        // numbers
        for(int col=0;col<2*n+1;col++){
            int start=1;
            if(row==0 || row==n-1){
                cout<<start;
                start++;
            }else{
                cout<<"_";
            }
        }





        cout<<endl;
    }



    return 0;
}